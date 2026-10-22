#include <iostream>

int main(){
    int n, i = 0;
    std::cin >> n;
    while(i < n){
        std::cout << "hello" << std::endl;
        i = i + 1;
    }

    int n=4, counter = 0;
    while(counter < n){
        std::cout << counter << std::endl;
        counter = counter + 1;
    }

// infinite loop
    int n, counter = 0;
    std::cin >> n;
    while(counter < n){
        std::cout << "hello" << std::endl;
    }

    double x, acc = 0;
    int n, counter = 0;
    std::cin >> x >> n;
    while(counter < n){
        acc = acc + x;
        counter = counter + 1;
    }
    std::cout << x << "*" << n <<  " = " << acc << std::endl;

    int n = 1;
    std::cin >> n;
    while((-11 < n) && (n < 11) ){ // != means different or not equal
        std::cout << n << std::endl;
        std::cin >> n;
    }

// echo
    std::string echo = "";
    std::cin >> echo;
    while (echo!="STOP"&&echo!="stop"&&echo!="Stop"){
        std::cout << echo <<std::endl;
        std::cin >> echo;
    }

// sum so far
    int n = 1, counter = 0, n1=0, n2=0;
    while (counter < n){
        std::cout << "enter a number:\n";
        std::cin >> n1;
        n2 = n2 + n1;
        std::cout<< "the sum so far is:\n";
        std::cout<<n2<<std::endl;
    }

// average so far
    double n = 1, counter = 0, n1=0, n2=0, avg=0;
    while (counter < n){
        std::cout << "enter a number:\n";
        std::cin >> n1;
        n2 = n2 + n1;
        avg = n2 / n;
        n = n + 1;
        std::cout<< "the average so far is:\n";
        std::cout<<avg<<std::endl;
    }

// division as repeated substraction
    int i = 0, num=10;
    while (num>3){
        i = i + 1;
        num = num - 3;
    }
    std::cout << "the quotient is the number of subtractions (" << i << ")\n";
    std::cout << "the remainder is the number we have at the end (" << num<<")"<<std::endl;
}