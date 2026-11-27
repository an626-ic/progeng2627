#include <iostream>
#include <vector>

void next_binary(std::vector<int>& num){
    int carry = 1;
    for(int index = num.size()-1; index>=0; index--){
        num[index] = num[index] + carry;
        if (num[index]==2){
            carry = 1;
            num[index] = 0;
        }else{
            carry = 0;
        }
    }
}

// next binary test

// int main() {
//     std::vector<int> number = {0, 1, 1, 1};
//     next_binary(number);
//     for (int i = 0; i < number.size(); i++) {
//         std::cout << number[i];
//     }
//     std::cout << std::endl;
//     return 0;
// }

// bool rows_in_order(std::vector<std::vector<int>>matrix, int& row){
//     row = -1;
//     for(int i=1; i<matrix.size();i++){
//         for(int j=0; j<matrix[i].size(); j++){
//             std::vector<int> expected = matrix[i-1];
//             next_binary(expected);
//             if(expected != matrix[i]){
//                 row = i;
//                 return false;
//             }
//         }
//     }
//     return true;
// }

int largest_gap(std::vector<std::vector<int>> matrix){
    int biggest = 0;
    for(int i=1; i<matrix.size(); i++){
        int cnt = 0;
        std::vector<int> expected = matrix[i-1];
        next_binary(expected);
        while(expected != matrix[i]){
            next_binary(expected);
            cnt++;
        }
        if(cnt > biggest){
            biggest = cnt;
        }
    }
    return biggest;
}

// check if whether rows are in order

// int main(){
//     std::vector<std::vector<int>> matrix = {
//         {0, 1, 0, 1, 0},
//         {0, 1, 0, 1, 1},
//         {0, 1, 1, 0, 0},
//         {0, 1, 1, 0, 1},
//         {0, 1, 1, 1, 0},
//         {0, 1, 1, 1, 1},
//         {1, 0, 0, 0, 1},
//         {1, 0, 0, 0, 0},
//         {1, 0, 0, 1, 0}
//     };

//     int row = -1;

//     if (rows_in_order(matrix, row)) {
//         std::cout << "Rows are in order" << std::endl;
//     } else {
//         std::cout << "Rows are not in order" << std::endl;
//         std::cout << "First incorrect row: " << row << std::endl;
//     }

//     return 0;
// }

// numbers with gaps

int main() {
    std::vector<std::vector<int>> matrix = {
        {0, 0, 0, 1, 0},
        {0, 0, 0, 1, 1},
        {0, 0, 1, 1, 0},
        {0, 0, 1, 1, 1},
        {0, 1, 0, 1, 1},
        {0, 1, 1, 0, 0}
    };

    int gap = largest_gap(matrix);

    std::cout << "Largest gap: " << gap << std::endl;

    return 0;
}