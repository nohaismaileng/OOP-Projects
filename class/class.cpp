#include <iostream>
#include "student.h"
#include <string>

using namespace std;

int main(){
    student std1;
    student std2;
    student std3;

    std1.set_name("nono");
    std1.set_id(1234);
    std1.set_age(22);

    std2.set_name("luna");
    std2.set_id(1664);
    std2.set_age(6);

    std3.set_name("ahmed");
    std3.set_id(9900);
    std3.set_age(22);

    cout << "Student 1: " << endl;
    std1.info();

    cout<< endl;
    cout << "Student 2: " << endl;
    std2.info();

    cout<< endl;

    cout << "Student 3: " << endl;
    std3.info();

    cout<< endl;

    return 0;
}
