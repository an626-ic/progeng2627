#include <iostream>
#include <string>
#include <cmath>

int main(){
    int start_x, start_y, end_x, end_y, x, y;
    std::string piece;
    
    std::cout<< "Please enter your chess piece: \n";
    std::cin>>piece;

    std::cout<< "Please enter your start x and y coordinates:\n";
    std::cin>>start_x>>start_y;

    std::cout<<"Please enter your destination x and y coordinates:\n";
    std::cin>>end_x>>end_y;

    x = abs(start_x - end_x);
    y = abs(start_y - end_y);

    if(start_x>0 && start_x<9 && start_y>0 && start_y<9 && end_x>0 && end_x<9 && end_y>0 && end_y<9){
        if(piece=="knight"){
            if((x == 2 && y == 1)||(x == 1 && y == 2)){
                std::cout<<"You have entered a valid move for Knight.\n";
            }else{
                std::cout<<"You have not entered a valid move for Knight. Please try again.\n";
            }
        }else if(piece=="bishop"){
            if(x==y&&start_x!=end_x){
                std::cout<<"You have entered a valid move for Bishop.\n";
            }else{
                std::cout<<"You have not entered a valid move for Bishop. Please try again.\n";
            }
        }else if(piece=="rook"){
            if ((x==0 && y != 0)||(x!=0 && y==0)){
                std::cout<<"You have entered a valid move for Rook.\n";
            }else{
                std::cout<<"You have not entered a valid move for Rook. Please try again.\n";
            }
        }else if(piece=="king"){
            if (x<2&&y<2&&!(x==0&&y==0)){
                std::cout<<"You have entered a valid move for King.\n";
            }else{
                std::cout<<"You have not entered a valid move for King. Please try again.\n";
            }
        }else if(piece=="queen"){
            if(x==y && start_x!=end_x){
                std::cout<<"You have entered a valid move for Queen.\n";
            }else if ((x==0 && y != 0)||(x!=0 && y==0)){
                std::cout<<"You have entered a valid move for Queen.\n";
            }else{
                std::cout<<"You have not entered a valid move for Queen. Please try again.\n";
            }
        }else{
            std::cout<<"You have entered an invalid piece. Please try again.\n";
        }
    }else{
        std::cout<<"You have entered an invalid position. Please try again.\n";
    }
}