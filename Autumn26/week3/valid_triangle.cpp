#include <iostream>
#include <cmath>

int main(){
    std::cout<<"Please input the three sides of your triangle:\n";
    int a, b, c, area, perimeter;
    std::cin>>a>>b>>c;
    if (a + b > c && a + c > b && b + c > a){
        if(a == b && b == c){
            std::cout<<"The triangle is equilateral.\n";
        }else if (a==b || b ==c|| a==c){
            std::cout<<"The triangle is isoceles.\n";
        }else{
            std::cout<<"The triangle is scalene.\n";
        }
    perimeter = a + b + c;
    std::cout<<"The perimeter is "<< perimeter <<".\n";
    area =  sqrt(0.5 * perimeter * (0.5*perimeter - a) * (0.5* perimeter - b) * (0.5*perimeter - c));
    std::cout<<"The area is "<<area<<".\n";
    }else{
        std::cout<<"The triangle is not valid.\n";
    }
}