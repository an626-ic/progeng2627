#include <iostream>
#include <vector>
#include <cmath>

// vectors as input (by copy)

// double sum_vector(std::vector<double> vin){
//     double sum = 0;
//     for(int i = 0; i < vin.size(); i++){
//         sum = sum + vin[i];
//     }
//     return sum;
// }

// int main(){
//     int n;
//     std::cout<<"key in your vector size:\n";
//     std::cin>>n;
//     std::vector<double> v(n);
//     for(int i=0; i<n; i++){
//         std::cout<<"key in your value:";
//         std::cin>>v[i];
//     }
//     std::cout << "the sum is: " << sum_vector(v) << std::endl;
// }

// vectors as input (by const reference)

// index of min value in a vector

// std::vector<double> min_vector_element(const std::vector<double>& vin){
//     std::vector<double> min(2);
//     for(int i = 0; i < vin.size(); i++){
//         if(vin[i]<vin[i+1]){
//             min[0] = vin[i];
//             min[1] = i;
//         }
//     }
//     return min;
// }

// int main(){
//     std::vector<double> v{3, 0.5, -1};
//     std::vector<double> min(2);
//     min = min_vector_element(v);
//     std::cout<<"the minimum value is "<<min[0]<<" at index "<<min[2]<<std::endl;
// }

// search a value in a vector

int search_vector(int n, const std::vector<int>& vin){
    int result;
    for(int i=0; i<vin.size(); i++){
        if(vin[i]==n){
            result = i;
            return result;
        }else{
            result = -1;
        }
    }
    return result;
}

int main(){
    std::vector<int> v{3, 3, 1};
    int n = 1;
    std::cout<<search_vector(n, v)<<std::endl;
}