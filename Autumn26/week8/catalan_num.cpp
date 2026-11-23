#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>

unsigned long k_catalan(const std::vector<unsigned long>& prev){
    unsigned long sum=0;
    for(int i=0; i<prev.size(); i++){
        sum += prev[i] * prev[prev.size() - 1 -i];
    }
    return sum;
}

std::vector<unsigned long> catalan_numbers(int n){
    std::vector<unsigned long> result;
    if (n<=0){
        return result;
    }
    result.push_back(1);
    while(result.size()<n){
        result.push_back(k_catalan(result));
    }
    return result;
}

// main to test functions

// int main(){
//     int n;
//     std::cout<<"enter a number:\n";
//     std::cin>>n;
//     std::vector<unsigned long> result = catalan_numbers(n);
//     for(int i=0; i<result.size(); i++){
//         std::cout<<"C"<<i<<" = "<<result[i]<<std::endl;
//     }
// }

// counting ways to evaluate expressions

int main(){
    std::ifstream infile;
    infile.open("expressions.txt");
    std::vector<std::string> v;

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }else{
        std::string tmp;
        while(infile >> tmp){
            v.push_back(tmp);
        }
        infile.close(); 
    }

    std::vector<unsigned long> result;
    for (int i=0; i<v.size(); i++){
        int sum=0;
        for (int j=0; j<v[i].size(); j++){
            if(v[i][j] == '+'||v[i][j] == '-'||v[i][j] == '*'||v[i][j] == '/'){
                sum++;
            }
        }
        result.push_back(catalan_numbers(sum + 1).back());
    }

    std::ofstream outfile;
    outfile.open("expressions_count.txt");
    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(int i=0; i < v.size(); i++){
       outfile << v[i] << " " << result[i] << std::endl;
    }
    outfile.close();
}