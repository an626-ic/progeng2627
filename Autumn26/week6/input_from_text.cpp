#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

// int main(){
//     std::ifstream infile;
//     std::string input;
//     std::cin >> input;
//     infile.open(input);

//     if(!infile.is_open()){
//         std::cout << "error opening file" << std::endl;
//         return EXIT_FAILURE;
//     }else{
//         int tmp, sum=0;
//         while(infile >> tmp){
//             std::cout << tmp << std::endl;
//             sum = sum + tmp;
//         }
//         std::cout<< sum << std::endl;
//         infile.close(); 
//     }
// }

// reverse numbers

// int main(){
//     std::ifstream infile; 
//     infile.open("input.txt");
//     std::vector<int> v;
//     if(!infile.is_open()){ 
//         std::cout << "error opening file" << std::endl;
//         return EXIT_FAILURE;
//     }
//     int tmp;
//     while(infile >> tmp){
//         v.push_back(tmp); 
//     }
//     infile.close(); 
//     for(int i=v.size(); i >= 0; i--){
//         std::cout<<v[i]<<std::endl;
//     }
// }

// reverse words

int main(){
    std::ifstream infile; 
    infile.open("input.txt");
    std::vector<std::string> v;
    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;
    while(infile >> tmp){
        v.push_back(tmp);
    }
    infile.close(); 
    for(int i=v.size(); i >= 0; i--){
        std::cout<<v[i]<<std::endl;
    }
}