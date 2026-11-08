#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
#include <utility>

// merging

// void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
//     int one=0;
//     int two=0;
//     while(one!=v1.size()&&two!=v2.size()){
//         if(v1[one]<v2[two]){
//             merged.push_back(v1[one]);
//             one++;

//         }else{
//             merged.push_back(v2[two]);
//             two++;
//         }
//     }
//     if(one==v1.size()){
//         for(int i=two; i<v2.size();i++){
//             merged.push_back(v2[i]);
//         }
//     }else{
//         for(int i=one; i<v1.size();i++){
//             merged.push_back(v1[i]);
//         }
//     }
// }

// int main(){

//     std::vector<int> v1;
//     std::vector<int> v2;
//     std::vector<int> out;

//     std::vector<int> expected_output;

//     v1 = {1, 3, 5, 6};
//     v2 = {4, 6, 10};
//     expected_output = {1, 3, 4, 5, 6, 6, 10};

//     merge_vectors_int(v1, v2, out);

//     if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
//         std::cout << "passed" << std::endl;
//     }
//     else{
//         for(int i=0; i<out.size();i++){
//             std::cout<<out[i]<<std::endl;
//         }
//         std::cout << "not passed" << std::endl;
//     }
// }

// counting occurrences

// int main(){

//     std::vector<std::string> text;
//     std::vector<std::string> words;
//     std::ifstream infile;

//     infile.open("text.txt");
//     if(!infile.is_open()){ 
//         std::cout << "error opening file" << std::endl;
//         return EXIT_FAILURE;
//     }
//     std::string tmp;
//     while(infile >> tmp){
//         text.push_back(tmp); 
//     }
//     infile.close();

//     infile.open("words.txt");
//     if(!infile.is_open()){ 
//         std::cout << "error opening file" << std::endl;
//         return EXIT_FAILURE;
//     }
//     while(infile >> tmp){
//         words.push_back(tmp); 
//     }
//     infile.close();

//     std::vector<int> count(words.size());

//     for(int i=0;i<words.size();i++){
//         for(int j=0;j<text.size();j++){
//             if(text[j]==words[i]){
//                 count[i]++;
//             }
//         }
//     }

//     std::ofstream outfile;
//     outfile.open("output_words.txt");
//     for(int i=0;i<count.size();i++){
//         outfile << words[i] << ": " << count[i] <<std::endl;
//     }
// }

// translating

// int main(){

//     std::vector<std::string> ad;
//     std::vector<std::string> meanings;

//     std::ifstream infile;

//     infile.open("ad.txt");
//     if(!infile.is_open()){ 
//         std::cout << "error opening file" << std::endl;
//         return EXIT_FAILURE;
//     }
//     std::string tmp;
//     while(infile >> tmp){
//         ad.push_back(tmp); 
//     }
//     infile.close();

//     infile.open("meanings.txt");
//     if(!infile.is_open()){ 
//         std::cout << "error opening file" << std::endl;
//         return EXIT_FAILURE;
//     }
//     while(infile >> tmp){
//         meanings.push_back(tmp); 
//     }
//     infile.close();

//     for(int i=0;i<ad.size();i++){
//         for(int j=0;j<meanings.size();j+=2){
//             if(ad[i]==meanings[j]){
//                 ad[i]=meanings[j+1];
//                 break;
//             }
//         }
//     }

//     std::ofstream outfile;
//     outfile.open("translate.txt");
//     for(int i=0;i<ad.size();i++){
//         outfile << ad[i] <<std::endl;
//     }
// }

std::string char_to_string(char c){
    std::string s;
    s.push_back(c);
    return s;
}

bool is_palindrome(std::string s){
    std::string cleaned;
    for(int i=0; i<s.size(); i++){
        if(s[i] != ' '){
            cleaned = cleaned + char_to_string(s[i]);
        }
    }
    for(int i=0; i<cleaned.size(); i++){
        if(cleaned[i]==cleaned[cleaned.size()-1-i]){

        }else{
            return false;
            break;
        }
    }
    return true;
}

int main(){

    std::vector<std::pair<std::string, bool>> test_cases = 
    {
        {"a man a plan a canal panama", true}, 
        {"a man plan a canal panama", false},
        {"a toyota", true},
        {"never odd or even", true},
        {"never even or odd", false}
    };

    for(int i = 0; i < test_cases.size(); i++){

        bool test = is_palindrome(test_cases[i].first);

        if(test == test_cases[i].second){
            std::cout << "passed" << std::endl;
        }
        else{
            std::cout << "FAILED" << std::endl;
            std::cout << test_cases[i].first << std::endl;
            std::cout << "expected: " << test_cases[i].second << std::endl;
            std::cout << "got: " << test << std::endl;
        }
    }
}