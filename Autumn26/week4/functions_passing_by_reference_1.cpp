#include <iostream>


// text swap
// void myswap(std::string& a, std::string& b){
//     std::string tmp;
//     tmp = a;
//     a = b;
//     b = tmp;
// }

// int main(){
//     std::string n1, n2;

//     std::cout << "please enter two values" << std::endl;
//     std::cin >> n1 >> n2;

//     std::cout << "you entered:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;

//     myswap(n1, n2);

//     std::cout << "after swapping the values:" << std::endl;
//     std::cout << "n1: " << n1 << std::endl;
//     std::cout << "n2: " << n2 << std::endl;
// }


// sort three numbers
void myswap(double& a, double& b){
    double tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void sort_three_numbers(double& s1, double& s2, double& s3){
    if (s1>s2){
        myswap(s1, s2);
        if(s2>s3){
            myswap(s2, s3);
            if (s1>s2){
                myswap(s1, s2);
            }
        }
    }else{
        if(s2>s3){
            myswap(s2, s3);
        }else{

        }
    }
}

int main(){
    // double n1, n2, n3;
    // std::cout << "please enter three numbers:" << std::endl;
    // std::cin >> n1 >> n2 >> n3;
    // sort_three_numbers(n1, n2, n3);
    double n1 = 3, n2 = 2, n3 = 1;
    sort_three_numbers(n1, n2, n3);
    if(n1 == 1 && n2 == 2 && n3 == 3){
        std::cout<<"1\n";
    }else{
        std::cout<<"0\n";
    }
}