#include <iostream>
#include <cmath>

// perimeter and area

// double area_perimeter(double length, double breadth, double& area, double&perimeter){
//     area = length * breadth;
//     perimeter = length + length + breadth + breadth;
// }


// int main(){
//     double length, breadth, area, perimeter;
//     std::cout<<"please input your length and breadth:";
//     std::cin>>length>>breadth;
//     area_perimeter(length, breadth, area, perimeter);
//     std::cout<<"your area is "<<area<<" and your perimeter is "<<perimeter;
// }

// integer division

// int div(int& result, int& modulo, int a, int b){
//     result = a/b;
//     modulo = a%b;
// }

// int main(){
//     int a, b, result, modulo;
//     std::cout<<"key in two integers:\n";
//     std::cin>>a>>b;
//     div(result, modulo, a, b);
//     std::cout<<"the integer division is "<<result<<std::endl;
//     std::cout<<"the remainder is "<<modulo<<std::endl;
// }

bool leap_year(int year){
    bool ly;
    if( (year % 4) == 0){ 
        if( (year % 100) == 0){ 
            if ((year % 400) == 0){
                ly = 1;
            }else{
            ly = 0;
            }
        }else{
            if ((year % 4) == 0){
                ly = 1;
            }else{
                ly = 0;
            }
        }
    }else{
        ly = 0;
    }
    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    d2 = d1;
    m2 = m1;
    y2 = y1;
    if(m1==2){
        if(d1 == 28){
            if(leap_year(y1)==true){
                d2 = 29;
                m2 = m1;
                y2 = y1;
            }else{
                d2 = 1;
                m2 = m1 + 1;
                y2 = y1;
            }
        }else if(d1 == 29){
            if(leap_year(y1)==true){
                d2 = 1;
                m2 = m1 + 1;
                y2 = y1;
            }else{
                std::cout<<"you have keyed in an invalid date."<<std::endl;
                d2 = 0;
                m2 = 0;
                y2 = 0;
            }
        }else{
            d2 = d1 + 1;
        }
    }
    if(m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10){
        if(d1 == 31){
            d2 = 1;
            m2 = m1 + 1;
            return;
        }else{
            d2 = d1 + 1;
            return;
        }
    }else{
        if(d1 == 30){
            d2 = 1;
            m2 = m2 + 1;
        }
    }
    if(m1 == 12){
        if(d1 == 31){
            d2 = 1;
            m2 = 1;
            y2 = y1 + 1;
        }else{
            d2 = d1 + 1;
        }
    }
}

int main(){
    int d1, m1, y1, d2, m2, y2;
    std::cout<<"key in your date (DD MM YYYY):\n";
    std::cin>>d1>>m1>>y1;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout<<"the next date is "<<d2<<"/"<<m2<<"/"<<y2<<std::endl;
}