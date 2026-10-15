#include <iostream>

int main(){
    for(int i = 0; i < 7; i++){
        std::cout << i << std::endl;
    }

// x^n
    int x, n, power=1;
    std::cin>>x>>n;
    for(int i=0; i < n; i++){
        power = power * x;
    }
    std::cout<<power<<std::endl;

// factorial
    int n;
    std::cin>>n;
    for(int i=n-1; i>0; i--){
        n = n * i;
    }
    std::cout<<n<<std::endl;
}