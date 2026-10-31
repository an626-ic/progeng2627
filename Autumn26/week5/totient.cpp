#include <iostream>
#include <cmath>

int gcd(int a, int b){
    int remainder1 = 1;
    while(b != 0){
        remainder1 = a % b;
        a = b;
        b = remainder1;
    }
    return a;
}

int euler_totient(int n){
    int cnt=0;
    for(int i = 1; i <= n; i++){
        if(gcd(n, i)==1){
            cnt++;
        }
    }
    return cnt;
}

int totient_sum(int n, int &depth){
    int sum = 1;
    depth = 0;
    while (euler_totient(n)!=1){
        n = euler_totient(n);
        depth++;
        sum = sum + n;
    }
    return sum;
}



int local_peak(int a, int b, int&x_plus, int&x_minus){
    int depth;
    int max_depth = 0, max_num = 0;
    for(int i = a; i <= b; i++){
        totient_sum(i, depth);
        if (depth > max_depth){
            max_num = i;
            max_depth = depth;
        }
        if (max_depth == 0){
            max_num = -1;
        }
    }
    if (max_num!= -1){
        x_plus = totient_sum(max_num+1, depth);
        x_minus = totient_sum(max_num-1, depth);
    }
    return max_num;
}

int main(){
    //gcd test cases
    std::cout << (gcd(48, 18) == 6) << std::endl;
    std::cout << (gcd(18, 48) == 6) << std::endl;
    std::cout << (gcd(17, 13) == 1) << std::endl;
    std::cout << (gcd(12, 4) == 4) << std::endl;
    std::cout << (gcd(5, 5) == 5) << std::endl;
    std::cout << (gcd(0, 5) == 5) << std::endl;
    std::cout << (gcd(5, 0) == 5) << std::endl;
    std::cout << (gcd(100, 75) == 25) << std::endl;
    std::cout << (gcd(1, 999) == 1) << std::endl;
    std::cout << (gcd(270, 192) == 6) << std::endl;
    std::cout << "---" << std::endl;

    //totient test cases
    std::cout << (euler_totient(9) == 6) << std::endl;
    std::cout << (euler_totient(12) == 4) << std::endl;
    std::cout << (euler_totient(17) == 16) << std::endl;
    std::cout << (euler_totient(1) == 1) << std::endl;
    std::cout << "---" << std::endl;

    //totient sum and depth test cases
    int depth;
    std::cout << (totient_sum(30, depth) == 15) << std::endl;
    std::cout << (totient_sum(9, depth) == 9) << std::endl;
    std::cout << (totient_sum(1, depth) == 1) << std::endl;
    std::cout << "---" << std::endl;

    //local peak test cases
    int x_plus, x_minus;
    std::cout << local_peak(14, 20, x_plus, x_minus) << std::endl;
    std::cout << x_plus << std::endl;
    std::cout << x_minus << std::endl;
}