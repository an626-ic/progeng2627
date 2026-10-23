#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

// int main(){
//     std::srand(std::time(NULL));
//     int row1 = std::rand() % 6 + 2;
//     int col1 = std::rand() % 6 + 2;
//     int counter=0, row2, col2;

//     while (!((row1 == 1 || row1 == 8) && (col1 == 1 || col1 == 8))){
        
//         std::cout<<"the knight is currently on square ("<<row1<<", "<<col1<<")\n";
//         std::cout<<"enter your next move (x y)\n";
//         std::cin>>row2>>col2;
        
//         if(row2 < 9 && row2 > 0 && col2 < 9 && col2 > 0){

//             int d_row = abs(row2 - row1);
//             int d_col = abs(col2 - col1);

//             if((d_row==2 && d_col==1)||(d_row==1 && d_col==2)){
//                 std::cout<<"that was a valid move\n";
//                 row1 = row2;
//                 col1 = col2;
//                 counter++;
//             }else{
//                 std::cout<<"that was not a valid move\n";
//             }
//         }
//     }
//     std::cout<<"congratulations! you took "<<counter<<" moves";
// }

// knight extension

int main(){
    bool win = 0;
    while(win == 0){
        std::srand(std::time(NULL));
        int row1 = std::rand() % 6 + 2;
        int col1 = std::rand() % 6 + 2;
        int counter=0, row2, col2;
    
        while (!((row1 == 1 || row1 == 8) && (col1 == 1 || col1 == 8))){
            while (counter < 6){        
                std::cout<<"the knight is currently on square ("<<row1<<", "<<col1<<")\n";
                std::cout<<"enter your next move (x y)\n";
                std::cin>>row2>>col2;
                
                if(row2 < 9 && row2 > 0 && col2 < 9 && col2 > 0){

                    int d_row = abs(row2 - row1);
                    int d_col = abs(col2 - col1);

                    if((d_row==2 && d_col==1)||(d_row==1 && d_col==2)){
                        std::cout<<"that was a valid move\n";
                        row1 = row2;
                        col1 = col2;
                        counter++;
                        if((row1 == 1 || row1 == 8) && (col1 == 1 || col1 == 8)){
                            break;
                        }
                    }else{
                        std::cout<<"that was not a valid move\n";
                    }
                }
            }
            std::cout<<"you have exceeded 5 moves, please try again\n";
            counter = 0;
            row1 = std::rand() % 6 + 2;
            col1 = std::rand() % 6 + 2;
        }
        std::cout<<"congratulations! you took "<<counter<<" move(s)";
        win = 1;
        return 0;
    }
}