#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

//write hello

// int main(){
//     std::ofstream outfile;
//     outfile.open("output.txt");
//     if(!outfile.is_open()){
//         std::cout << "error opening file" << std::endl;
//         return EXIT_FAILURE;
//     }
//     outfile << "hello" << std::endl;
//     outfile.close();
// }

//reverse file & read names

// int main(){
//     std::string inputfilename;
//     std::cout<<"enter name of input file" << std::endl;
//     std::cin >> inputfilename;

//     std::string outputfilename;
//     std::cout<<"enter name of output file" << std::endl;
//     std::cin >> outputfilename;

//     std::ifstream infile; 
//     infile.open(inputfilename);

//     std::vector<std::string> v;

//     if(!infile.is_open()){ 
//         std::cout << "error opening file" << std::endl;
//         return EXIT_FAILURE;
//     }

//     std::string tmp;

//     while(infile >> tmp){
//         v.push_back(tmp); 
//     }
//     infile.close();
//     std::ofstream outfile;
//     outfile.open("outputfilename");
//     for(int i=v.size(); i >= 0; i--){
//         outfile << v[i] <<std::endl;
//     }
// }

// fruits

// int main(){

//     std::ifstream infile;
//     infile.open("warehouse1.txt");
//     std::vector<std::string> v;
//     std::vector<std::string> x;
//     if(!infile.is_open()){ 
//         std::cout << "error opening file" << std::endl;
//         return EXIT_FAILURE;
//     }
//     std::string tmp;
//     while(infile >> tmp){
//         v.push_back(tmp);
//     }
//     infile.close(); 

//     infile.open("warehouse2.txt");
//     if(!infile.is_open()){ 
//         std::cout << "error opening file" << std::endl;
//         return EXIT_FAILURE;
//     }
//     while(infile >> tmp){
//         bool found = false;
//         for(int j=0; j < v.size(); j++){
//             if(tmp!=v[j]){
//                 found = true;
//             }else{
//                 x.push_back(tmp);
//             }
//         }
//         if (found==true){
//             v.push_back(tmp);
//         }
//     }
//     infile.close();

//     std::ofstream outfile;
//     outfile.open("union.txt");
//     if(!outfile.is_open()){
//         std::cout << "error opening file" << std::endl;
//         return EXIT_FAILURE;
//     }
//     for(int i=0; i < v.size(); i++){
//         outfile << v[i] << std::endl;
//     }
//     outfile.close();

//     outfile.open("intersection.txt");
//     if(!outfile.is_open()){
//         std::cout << "error opening file" << std::endl;
//         return EXIT_FAILURE;
//     }
//     for(int i=0; i < x.size(); i++){
//         outfile << x[i] << std::endl;
//     }
//     outfile.close();
// }

// fruits using functions

int search_vector(std::string s, const std::vector<std::string>& vin){
    bool found = false;
    for(int i=0; i < vin.size(); i++){
        if(s==vin[i]){
            found = true;
        }
    }
    return found;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    vout = vin1;
    for(int i=0; i < vin2.size(); i++){
        if(search_vector(vin2[i], vin1)!=true){
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0; i < vin2.size(); i++){
        if(search_vector(vin2[i], vin1)==true){
            vout.push_back(vin2[i]);
        }
    }
}

int main(){

    std::ifstream infile;
    infile.open("warehouse1.txt");
    std::vector<std::string> warehouse1;
    std::vector<std::string> warehouse2;
    std::vector<std::string> un;
    std::vector<std::string> inter;
    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;
    while(infile >> tmp){
        warehouse1.push_back(tmp);
    }
    infile.close(); 

    infile.open("warehouse2.txt");
    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    while(infile >> tmp){
        warehouse2.push_back(tmp);
    }
    infile.close();

    std::ofstream outfile;
    outfile.open("union.txt");
    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    union_vector(warehouse1, warehouse2, un);
    for(int i=0; i < un.size(); i++){
        outfile << un[i] << std::endl;
    }
    outfile.close();

    outfile.open("intersection.txt");
    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    intersection_vector(warehouse1, warehouse2, inter);
    for(int i=0; i < inter.size(); i++){
        outfile << inter[i] << std::endl;
    }
    outfile.close();
}