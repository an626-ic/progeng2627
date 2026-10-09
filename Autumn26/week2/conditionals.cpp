#include <iostream>
#include <string>


int main(){
//multiples of 3
    // int num, rem;
    // std::cout << "Please enter a number:\n";
    // std::cin >> num;
    // rem = num%3;
    // if (rem==0){
    //     std::cout << "Yes it is a multiple of 3." << std::endl;
    // }else{
    //     std::cout << "No, it is not a multiple of 3, it has a remainder of " <<rem<<"."<<std::endl;
    // }

// absolute values
    double n, absv;
    std::cout << "Please input a numnber:\n";
    std::cin >> n;
    if(n < 0){
        absv = -n;
    }
    else{
        absv = n;
    }
    std::cout << "|" << n << "| = " << absv << std::endl;
}