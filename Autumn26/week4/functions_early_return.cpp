#include <iostream>


// smallest factor

int smallest_factor(int n){
    for(int i = 2; i<n; i++){
        if(i==n-1){
            return 0;
        }
        if((n%i)==0){
            return i;
        }
    }
}

// int main(){
//     int n1 = 1763, n2 = 213, n3 = 49, n4 = 89;
//     std::cout<<smallest_factor(n1)<<std::endl;
//     std::cout<<smallest_factor(n2)<<std::endl;
//     std::cout<<smallest_factor(n3)<<std::endl;
//     std::cout<<smallest_factor(n4)<<std::endl;
// }

// primes in a range

int main(){
    int n1, n2;
    std::cout<<"enter two integers in ascending order:\n";
    std::cin>>n1>>n2;
    for(int j = n1+1; j<n2; j++){
        if(smallest_factor(j)==0){
            std::cout<<j<<std::endl;
        }
    }
}