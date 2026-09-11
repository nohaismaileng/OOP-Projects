#include "employee.h"
#include "manager.h"

void processemployee(const employee& employee) 
{}
int main(){
    std::string name("luna");
    employee emp1 (name, 2, 500);
    emp1.display();


    //employee emp1(name,1,500);
    //employee e(emp1);
    //e.display();


    //name = ("bila");
    //employee *emp2 = new employee(name,3,2000);

    //emp2 ->display();

    manager manager ("nono" , 234, 400000);
    manager.display();


    return 0;
}
