#include <iostream>
#include "Library.h"

using namespace std;

Book::Book(string title, string author){
    this -> title = title;
    this -> author = author;
    available = true;
}

void Book::display_Info(){
    std::cout << "Book: " << title << endl;
    std::cout << "Author: " << author << endl;

    if (available){
        std::cout << "Available!!" << endl;        
    }
    else {
        std::cout << "Not Available" << endl;
    }
}

bool Book::Available(){
    return available;
}

void Book::borrow_Item(){
    if(available){
        available = false;
        std::cout << "Book Borrowed Successfully."<< endl;
    }
    else{
        std::cout<< "Book is already borrowed."<< endl;
    }
}

void Book::return_Item(){
    available = true;
    std::cout << "Book returned Successfully." << endl;
}

Magazine::Magazine(string title, int issueNum){
    this -> title = title;
    this -> issueNum = issueNum;
    available = true;
}

void Magazine::display_Info(){
    std::cout << "Maagzine: " << title << endl;
    std::cout << "Issue Number: " << issueNum << endl;

    if(available){
        std::cout << "Available!!" << endl;
    }
    else{
        std::cout << "Not Available" << endl;
    }
}

bool Magazine::Available(){
    return available;
}

void Magazine::borrow_Item(){
    if (available){
        available =false;
        std::cout << "Magazine borrowed successfully." << endl;
    }
    else{
        std::cout << "Magazine is Already borrowed."<< endl;
    }
}

void Magazine::return_Item(){
    available = true;
    std::cout << "Magazine returned succeessfully." << endl;
}
