#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;


class student{
    int id;
    int age;
    string name;
    public: 
        void set_id(int id);
        int get_id();

        void set_age(int age);
        int get_age();

        void set_name(string name);
        string get_name();

        void info ();
};

#endif
