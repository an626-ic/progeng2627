#include <iostream>
#include <string>

int main(){

    double length_in, length_out;
    std::string unit_in, unit_out;

    const double mile_to_km = 1.609;

    std::cin >> length_in >> unit_in;

    bool valid_unit = true;

    if(unit_in == "km"){
        unit_out = "miles";
        length_out = length_in / mile_to_km;

    }
    else if( (unit_in == "mile") || (unit_in == "miles") ){ // the || means "or"
        unit_out = "km";
        length_out = length_in * mile_to_km;
    }
    else{
        valid_unit = false;
    }


    if(valid_unit){
        std::cout << length_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }

    double input, output;
    std::string unit="";
    std::cout << "key in your temperature for conversion (e.g. 15 F):\n";
    std::cin >> input >> unit;
    if (unit == "C"||unit=="c"){
        output = input * 9 / 5 + 32;
        std::cout << "you have converted " << input << " degrees celcius to " << output << " degrees farenheit" <<std::endl;
    }else{
        if(unit == "F"||unit=="f"){
            output = (input - 32) * 5 / 9;
            std::cout << "you have converted " << input << " degrees farenheit to " << output << " degrees celcius" <<std::endl;
        }else{
            std::cout<<"error, unit not recogised"<<std::endl;
        }
    }
}