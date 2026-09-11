#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class employee{

    public:
    employee(std::string name,  int id, int salary);
    employee(const employee & copy);
    ~employee();

    void display();
    
    private:
    std::string m_name;
     int m_id;
     int m_salary;
};

#endif
