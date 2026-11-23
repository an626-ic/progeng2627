#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <vector>

// gives index from 2D to 1D

int twod_to_oned(int row, int col, int rowlen){
    return row*rowlen+col;
}


// gives index of n in v, or -1 if n not in v
int mfind(int n, const std::vector<int>& v){
    for(int i=0; i<v.size(); i++){
        if(n == v[i]){
            return i;
        }
    }
    return -1;
}

// - true if v contains all the numbers from 1 to v.size() and false otherwise
// must (meaningfully) use function mfind
bool check_sequence(const std::vector<int>& v){
    for(int i=0; i<v.size(); i++){
        if(mfind(i+1, v)==-1){
            return false;
        }
    }
    return true;
}

// finds row of sudoku
// note that this function must (meaningfully) use function twod_to_oned
void get_row(int r, const std::vector<int>& in, std::vector<int>& out){
    int rowlen = std::sqrt(in.size());
    for(int i=0; i<rowlen;i++){
        out.push_back(in[twod_to_oned(r, i, rowlen)]);
    }
}

// finds column of sudoku
// note that this function must (meaningfully) use function twod_to_oned
void get_col(int c, const std::vector<int>& in, std::vector<int>& out){
    int rowlen = std::sqrt(in.size());
    for(int i=0; i<rowlen;i++){
        out.push_back(in[twod_to_oned(i, c, rowlen)]);
    }
}

// finds subsquares of sudoku
// we consider subsquares to be indexed from left to right and then from top to bottom 
// note that this function must (meaningfully) use function twod_to_oned
void get_subsq(int subs, const std::vector<int>& in, std::vector<int>& out){
    int rowlen = std::sqrt(in.size());
    int sublen = std::sqrt(rowlen);
    int start_row = (subs / sublen) * sublen;
    int start_col = (subs % sublen) * sublen;
    for(int i=start_row; i<start_row + sublen; i++){ // sub row counter
        for(int j=start_col; j<start_col + sublen; j++){ // sub col counter
            out.push_back(in[twod_to_oned(i, j, rowlen)]);
        }
    }
}

// checks if sudoku is valid
bool valid_sudoku(const std::vector<int>& g){
    int side = std::sqrt(g.size()); 
    std::vector<int> seq;

    // for each row
    for(int i = 0; i < side; i++){
        seq.clear();
        get_row(i, g, seq);

        if(!check_sequence(seq)){ 
            return false;
        }
    }

    // for each column
    for(int i = 0; i < side; i++){
        seq.clear();
        get_col(i, g, seq);

        if(!check_sequence(seq)){ 
            return false;
        }
    }

    // for each subsquare
   for(int i = 0; i < side; i++){
        seq.clear();
        get_subsq(i, g, seq);

        if(!check_sequence(seq)){ 
            return false;
        }
    }

    return true;
}

int main(int argc, char* argv[]){

    if(argc != 2){
        std::cout << "one argument needed" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<int> s;

    std::ifstream infile;
    infile.open(argv[1]);

    if(!infile.is_open()){
        std::cout << "error, can't open input file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        s.push_back(tmp);
    }

    int side = std::sqrt(s.size());

    for(int i = 0; i < side; i++){
        for(int j = 0; j < side; j++){
            std::cout << s[twod_to_oned(i, j, side)] << " ";
        }
        std::cout << std::endl;
    }

    bool valid = valid_sudoku(s);

    if(valid){
        std::cout << "valid" << std::endl;
    }
    else{
        std::cout << "not valid" << std::endl; 
    }

}