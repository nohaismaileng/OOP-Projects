#include <iostream>
#include "student.h"

using namespace std;

void student::set_id(int id){
    this -> id = id;
}
int student::get_id(){
    return id;
}

void student::set_age(int age){
    this->age = age;
}

int student::get_age(){
    return age;
}

void student::set_name(string name){
    this->name = name;
}

string student::get_name(){
    return name;
}

void student::info(){
    cout << "Student Name: " << name << endl;
    cout << "Student ID:  " << id << endl;
    cout << "Student Age: " << age << endl;
}
