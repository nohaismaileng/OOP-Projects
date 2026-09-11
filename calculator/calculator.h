#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
#include <string>

using namespace std;

class Calculator{
public:
    virtual void add() = 0;
    virtual void sub() = 0;
    virtual void multiply() = 0;
    virtual void divide() = 0;
    virtual void modulus() = 0;

    virtual void Display() = 0;

    virtual ~Calculator()= 0;
};

class Calculator_Base : public Calculator{
public:
    void add();
    void sub();
    void multiply();
    void divide();
    void modulus();

    void Display();
};

class Programmer_Calculator : public Calculator_Base{
public:
    void Hex_to_Dec();
    void Dec_to_Hex();
    void Display();
};

class Trig_Calculator : public Calculator_Base{
public:
    void sin_angle();
    void cos_angle();
    void tan_anlge();

    void Display();
};

#endif
