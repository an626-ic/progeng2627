#include <iostream>
#include <cmath>

// // sum of powers
// int main(){
//     double x, n, sum=0;
//     std::cout<<"key in x:\n";
//     std::cin>>x;
//     std::cout<<"key in n:\n";
//     std::cin>>n;
//     for(int i=1; i < n+1; i++){
//         sum = sum + pow(x, i);
//     }
//     std::cout<<"the sum of powers is "<<sum<<std::endl;
// }

// mypow with negative exponent
double mypow(double base, int exp){
    double result = 1;
    if (exp>=0){
        for(int counter = 0; counter < exp; counter++){
                result = result*base;
        }
    }else{
        exp = -exp;
        for(int counter = 0; counter < exp; counter++){
            result = result/base;
        }
    }
    
    return result;
}

// int main(){
// // test negative exponents
//     // std::cout << "2^-3: " << mypow(2, -3) << std::endl;
//     // std::cout << "0.5^-2: " << mypow(0.5, -2) << std::endl;
//     // std::cout << "1^0: " << mypow(1, -0) << std::endl;

// // sum of powers with mypow function
//     double x, n, sum=0;
//     std::cout<<"key in x:\n";
//     std::cin>>x;
//     std::cout<<"key in n:\n";
//     std::cin>>n;
//     for(int i=1; i < n+1; i++){
//         sum = sum + mypow(x, i);
//     }
//     std::cout<<"the sum of powers is "<<sum<<std::endl;
// }

//factorial
// int myfactorial(int in){
//     int fact = 1;
//     for(int i=1; i<in+1; i++){
//         fact = fact*i;
//     }
//     return fact;
// }

// int main(){
//     int n; 
//     std::cout << "please enter a number" << std::endl;
//     std::cin >> n;
//     std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
// }


//leap year again
// bool leap_year(int year){
//     bool ly;
//     if( (year % 4) == 0){ 
//         if( (year % 100) == 0){ 
//             if ((year % 400) == 0){
//                 ly = 1;
//             }else{
//             ly = 0;
//             }
//         }else{
//             if ((year % 4) == 0){
//                 ly = 1;
//             }else{
//                 ly = 0;
//             }
//         }
//     }else{
//         ly = 0;
//     }
//     return ly;
// }

// int main(){

//     // int input_year, ly;

//     // std::cout << "please enter a year" << std::endl;
//     // std::cin >> input_year;

//     // if(leap_year(input_year)){
//     //     std::cout << "it's a leap year" << std::endl;
//     // }
//     // else{
//     //     std::cout << "it's not a leap year" << std::endl;
//     // }

//     std::cout << (leap_year(1600) == true) << std::endl;
//     std::cout << (leap_year(1700) == false) << std::endl;
//     std::cout << (leap_year(1800) == false) << std::endl;
//     std::cout << (leap_year(1900) == false) << std::endl;
//     std::cout << (leap_year(2000) == true) << std::endl;
//     std::cout << (leap_year(2100) == false) << std::endl;
//     std::cout << (leap_year(2200) == false) << std::endl;
//     std::cout << (leap_year(2300) == false) << std::endl;
//     std::cout << (leap_year(2400) == true) << std::endl;
//     std::cout << (leap_year(2500) == false) << std::endl;
//     std::cout << (leap_year(2600) == false) << std::endl;
//     std::cout << (leap_year(2700) == false) << std::endl;
//     std::cout << (leap_year(2800) == true) << std::endl;
//     std::cout << (leap_year(2900) == false) << std::endl;
//     std::cout << (leap_year(3000) == false) << std::endl;
// }

//max of numbers
// int max(int n1, int n2, int n3){
//     if (n1>n2){
//         if(n1>n3){
//             return n1;
//         }else{
//             return n3;
//         }
//     }else{
//         if(n2>n3){
//             return n2;
//         }else{
//             return n3;
//         }
//     }
// }

// int main(){
//     int n1, n2, n3, max_num;
//     std::cout<<"key in 3 numbers:\n";
//     std::cin>>n1>>n2>>n3;
//     max_num = max(n1, n2, n3);
//     std::cout<<"the biggest number is "<<max_num<<std::endl;
// }

// sum of powers function
double sum_of_powers(int x, int n){
    int sum = 0;
    for(int i=1; i < n+1; i++){
        sum = sum + mypow(x, i);
    }
    return sum;
}

int main(){
    double x, n, sum=0;
    std::cout<<"key in x:\n";
    std::cin>>x;
    std::cout<<"key in n:\n";
    std::cin>>n;
    std::cout<<"the sum of powers is "<<sum_of_powers(x, n)<<std::endl;
}