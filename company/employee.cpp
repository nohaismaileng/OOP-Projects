#include "employee.h"
#include <iostream>
using namespace std;

employee::employee(std::string name ,  int id , int salary ) : m_name{name}, m_id{id} , m_salary{salary}
{}

employee::employee(const employee& copy){
    this ->m_name = copy.m_name;
    this -> m_id = copy.m_id;
    this -> m_salary = copy.m_salary;

}

employee::~employee()
{
    std:: cout << "director has ended" << std::endl;
}

void employee::display(){
        std::cout << "welcome on board " << m_name <<endl;
        std::cout << "your id is " << m_id <<std::endl;
        std::cout << "your salary is " << m_salary <<std::endl;
}
