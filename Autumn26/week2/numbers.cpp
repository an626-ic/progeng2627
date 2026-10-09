#include <iostream>
#include <cmath>

int main(){
//rectangles
    double length, breadth, perimeter, area;
    std::cout << "key in your rectangle length:\n";
    std::cin >> length;
    std::cout << "key in your rectangle width:\n";
    std::cin >> breadth;
    perimeter = 2.0 * length + 2.0 * breadth;
    area = length * breadth;
    std::cout << "your rectangle has an area of " << area << " and a perimeter of " << perimeter <<std::endl;

//currency conversion
    double GBP, euro;
    std::cout << "key in your GBP amount for conversion:\n";
    std::cin >> GBP;
    euro = GBP / 1.18;
    std::cout << "you have converted " << GBP << " GBP to " << euro << "s" <<std::endl;

//temperature conversion
    double faren, degree;
    std::cout << "key in your temperature in degrees farenheit for conversion:\n";
    std::cin >> faren;
    degree = (faren - 32) * 5 / 9;
    std::cout << "you have converted " << faren << " degrees farenheit to " << degree << " degrees celcius" <<std::endl;

//bmi calculator
    double weight, height, BMI;
    std::cout << "Key in your weight:\n";
    std::cin >> weight;
    if (weight >= 80) {
        std::cout <<"Time to hit the treadmill!\n";
    }
    std::cout << "Key in your height in m:\n";
    std::cin >> height;
    if (height <= 1.8){
        std::cout <<"Shortie...\n";
    }
    BMI = weight/height/height;
    BMI = std::round(BMI * 10.0) / 10.0;
    std::cout << "Your BMI is " << BMI <<".\n";
    if (BMI >= 27){
        std::cout << "Please clear your BMI before the end of the work year." << std::endl;
    }
}