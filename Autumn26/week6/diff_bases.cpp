#include <iostream>
#include <vector>
#include <cmath>

// convert numbers to different bases

bool toBase(int num, int base, std::vector<int>& v){
    if (base < 2 || base > 16){
        return false;
    } else {
        int tmp=num;
        int rem;
        while((tmp!=0)){
            rem = tmp%base;
            v.push_back(rem);
            tmp = tmp/base;
        }
        return true;
    }
}

void toPrint(std::vector<int> v){
    for(int i=v.size()-1; i>=0; i--){
        if(v[i]==10){
            std::cout<<"A";
        }else if(v[i]==11){
            std::cout<<"B";
        }else if(v[i]==12){
            std::cout<<"C";
        }else if(v[i]==13){
            std::cout<<"D";
        }else if(v[i]==14){
            std::cout<<"E";
        }else if(v[i]==15){
            std::cout<<"F";
        }else{
            std::cout<<v[i];
        }
    }
    std::cout<<std::endl;
}

// int main(){
//     int num = 250;
//     int base = 16;
//     std::vector<int> v;
//     // std::cout<<"enter your number and base:\n";
//     // std::cin>>num>>base;
//     if(toBase(num, base, v)==false){
//         std::cout<<"your base is out of range\n";
//     }else{
//         toPrint(v);
//         // for(int i=v.size()-1; i>=0; i--){
//         //     std::cout<<v[i];
//         // }
//     }
// }

// converting numbers from different bases to decimal

int toDecimal(std::vector<int> v, int base){
    int sum = 0;
    for(int i=0; i<v.size(); i++){
        sum = sum + v[i] * pow(base, i);
    }
    return sum;
}

// int main() {
//     int num = 250;
//     int base = 16;
//     std::vector<int> v;

//     if (toBase(num, base, v)) {
//         toPrint(v);
//         int decimal = toDecimal(v, base);
//         std::cout << "Decimal number restored from digits: " << decimal << std::endl;
//     } else {
//         std::cout << "Invalid base" << std::endl;
//     }
//     return 0;
// }

// converting between different bases

bool convertBase(std::vector<int> vin1, int base1, int base2, std::vector<int>& vin2){
    if(base1 < 2 || base1 > 16 || base2 < 2 || base2 > 16){
        return false;
    }else{
        int val = toDecimal(vin1, base1);
        toBase(val, base2, vin2);
        return true;
    }
}

int main() {
    int num = 250;
    std::vector<int> octal_digits;
    std::vector<int> hex_digits;

    toBase(num, 8, octal_digits);

    std::cout << "Octal: ";
    toPrint(octal_digits);

    /// Convert the octal digits to hexadecimal digits
    if (convertBase(octal_digits, 8, 16, hex_digits)) {
        std::cout << "Hexadecimal: ";
        toPrint(hex_digits);
    } else {
        std::cout << "Invalid base" << std::endl;
    }

    return 0;
}