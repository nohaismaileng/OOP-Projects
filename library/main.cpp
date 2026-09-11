#include <iostream>
#include <vector>
#include "Library.h"

using namespace std;

int main(){
    vector<Library_Item*> Items;

    Book* book1 = new Book("C++ Programming", "Bjarne");
    Magazine* magazine1 = new Magazine ("Technology Magazine", 25);

    Items.push_back(book1);
    Items.push_back(magazine1);

    std::cout << "Library Items: " << endl;
    std::cout << "---------------" << endl;

    for (auto Item : Items){
        Item -> display_Info();
        cout << endl;
    }

    std::cout << "Borrowing Items: " << endl;
    Items[0] -> borrow_Item();
    Items[1] -> borrow_Item();

    std::cout << endl;

    std::cout << "Trying to borrow the book again: " << endl;
    Items[0] -> borrow_Item();

    std::cout << endl;

    std::cout << "Returning book: " << endl;
    Items[0] -> borrow_Item();

    std::cout << endl;
    std::cout << "after changes: " << endl;

    for (auto Item : Items){
        Item -> display_Info();
        std::cout << endl;
    }

    for (auto Item : Items){
        delete Item;
    }

    return 0;

}
