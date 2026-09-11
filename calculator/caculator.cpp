#include "calculator.h"
#include <cmath>
#include <sstream>
#include <iomanip>

void Calculator_Base::add(){
    double a, b;
    std::cout << "enter two numbers: "; 
    std::cin >> a >> b;
    std::cout << "Result= " << a + b << endl;
}

void Calculator_Base::sub(){
    double a, b;
    std::cout << "enter two numbers: "; 
    std::cin >> a >> b;
    std::cout << "Result= " << a - b << endl;
}

void Calculator_Base::multiply(){
    double a, b;
    std::cout << "enter two numbers: "; 
    std::cin >> a >> b;
    std::cout << "Result= " << a * b << endl;
}

void Calculator_Base::divide(){
    double a, b;
    std::cout << "enter two numbers: "; 
    std::cin >> a >> b;

    if (b == 0){
        std::cout << "Error! can not divide by Zero." << endl;
    }
    else{
    std::cout << "Result= " << a / b << endl;
}
}

void Calculator_Base::modulus(){
    int a, b;
    std::cout << "enter two intgers: "; 
    std::cin >> a >> b;

    if (b == 0){
        std::cout << "Error! can not divide by Zero." << endl;
    }
    else{
    std::cout << "Result= " << a % b << endl;
}
}

void Calculator_Base::Display(){
    std::cout << "Basic Calculator Opteration" << endl;
}

void Programmer_Calculator::Hex_to_Dec(){
    string hex_number;
    std::cout << "Enter Hexadecimal number: ";
    std::cin >> hex_number;

    int decimal;

    stringstream ss;
    ss << hex_number;
    ss >> hex >> decimal;

    std::cout << "Decimal = " << decimal << endl;
}

void Programmer_Calculator::Dec_to_Hex(){
    int decimal;
    std::cout << "Enter decimal number: ";
    std::cin >> decimal;
    std::cout << " Hexadecimal = " << uppercase << hex << decimal << nouppercase << dec << endl;
}

void Programmer_Calculator::Display(){
    std::cout << "Programming Calculator Operation" << endl;
}

void Trig_Calculator::sin_angle(){
    double angle;
    std::cout << "Enter Angle in degrees: ";
    std::cin >> angle;
    double radians = angle * M_PI / 180.0;
    std::cout << "sin(" << angle << ") = " << sin(radians) << endl;
}

void Trig_Calculator::cos_angle(){
    double angle;
    std::cout << "Enter Angle in degrees: ";
    std::cin >> angle;
    double radians = angle * M_PI / 180.0;
    std::cout << "cos(" << angle << ") = " << cos(radians) << endl;
}

void Trig_Calculator::tan_anlge(){
    double angle;
    std::cout << "Enter Angle in degrees: ";
    std::cin >> angle;
    double radians = angle * M_PI / 180.0;
    std::cout << "tan(" << angle << ") = " << tan(radians) << endl;
}

void Trig_Calculator::Display(){
    std::cout << "Trig Calculator Operation" << endl;
}

Calculator::~Calculator()
{
}
