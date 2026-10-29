#include <iostream>
#include <vector>

// appending vectors

// void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
//     for(int i=0; i<vin1.size(); i++){
//         vout.push_back(vin1[i]);
//     }
//     for(int i=0; i<vin2.size(); i++){
//         vout.push_back(vin2[i]);
//     }
// }

// int main(){
//     std::vector<int> vin1 = {1, 2, 3, 4};
//     std::vector<int> vin2 = {5, 6, 7, 8};
//     std::vector<int> vout;
//     append_vectors(vin1, vin2, vout);
//     for(int i=0; i<vout.size(); i++){
//         std::cout<<vout[i]<<std::endl;
//     }
// }

// filtering values

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for(int i = 0; i<vin.size(); i++){
        if(vin[i]>t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    std::vector<double> vin = {1, 2, 3, 4};
    double t = 2;
    std::vector<double> vout;
    filter_v(vin, t, vout);
    for(int i=0; i<vout.size(); i++){
        std::cout<<vout[i]<<std::endl;
    }
}