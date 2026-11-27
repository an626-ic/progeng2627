#include <iostream>
#include <vector>
#include <string>

void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
){
    
    // making every character in solution '#'
    for (int row = 0; row < grid.size(); row++) {
        solution.push_back(std::string(grid[row].size(), '#'));
    }

    std::vector<bool> found(words.size(), false);

    // check horizontally
    for(int i = 0; i < grid.size(); i++){ // row counter

        for(int j = 0; j < grid[0].size(); j++){ // column counter

            for(int k = 0; k < words.size(); k++){ // word counter

                if (j + words[k].size() <= grid[i].size()){ // check if the word length exceeds available space in the row

                    bool matches = true;
                    int l = 0;

                    while(l < words[k].size() && matches == true){ // checking if word is matching

                        if (grid[i][j + l] != words[k][l]){
                            matches = false;
                        }

                        l++;
                    }

                    if(matches == true){ // if matching, writes solution and flag as "found"

                        l = 0;

                        while(l < words[k].size()){
                            solution[i][j + l] = words[k][l];
                            l++;
                        }

                        found[k] = true;
                    }
                }
            }
        }
    }

    //check vertically
    for(int i = 0; i < grid.size(); i++){ // row counter

        for(int j = 0; j < grid[0].size(); j++){ // colmumn counter

            for(int k = 0; k < words.size(); k++){ // word counter

                if (i + words[k].size() <= grid.size()){ // check if the word length exceeds available space in the column

                    bool matches = true;
                    int l = 0;

                    while(l < words[k].size() && matches == true){ // checking if word is matching

                        if (grid[i + l][j] != words[k][l]){
                            matches = false;
                        }

                        l++;
                    }

                    if(matches == true){ // if matching, writes solution and flag as "found"

                        l = 0;

                        while(l < words[k].size()){
                            solution[i + l][j] = words[k][l];
                            l++;
                        }

                        found[k] = true;
                    }
                }
            }
        }
    }

    // update not found
    for(int k = 0; k < words.size(); k++){

        if (found[k] == false){
            not_found.push_back(words[k]);
        }

    }
}

int main(){

    // test 1
    // std::vector<std::string> grid = {
    //     "xappleg",
    //     "dzeazkg",
    //     "zwazzbx",
    //     "dxnqzoy",
    //     "qyueytp",
    //     "pythtyg"
    // };

    // std::vector<std::string> words = {"peanut", "bot", "mango", "apple", "cinnamon"};

    // test 2
    std::vector<std::string> grid = {
        "zapplexyzwxbotyz"
    };

    std::vector<std::string> words = {"bot", "apple"};

    std::vector<std::string> solution;
    std::vector<std::string> not_found;

    find_words(grid, words, solution, not_found); 

    // test 1 expected

    // std::vector<std::string> expected_solution = {
    //     "#apple#",
    //     "##e####",
    //     "##a##b#",
    //     "##n##o#",
    //     "##u##t#",
    //     "##t####"
    // };

    // std::vector<std::string> expected_not_found = {"mango", "cinnamon"};

    // test 2 expected

    std::vector<std::string> expected_solution = {
        "#apple#####bot##"
    };

    std::vector<std::string> expected_not_found = {};

    if( (solution == expected_solution) && (not_found == expected_not_found) ){
        std::cout << "test passed" << std::endl;
    }
    else{
        std::cout << "test failed" << std::endl;
    }

    std::cout << "solution:" << std::endl;
    for(int i = 0; i < solution.size(); i++){
        std::cout << solution[i] << std::endl;
    }

    std::cout << "not found:" << std::endl;
    for(int i = 0; i < not_found.size(); i++){
        std::cout << not_found[i] << std::endl;
    }

}