#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H
#include <string>

using namespace std;

class Library_Item{
public :
    virtual void display_Info() = 0;
    virtual bool Available() = 0;
    virtual void borrow_Item() = 0;
    virtual void return_Item() = 0;

    virtual ~Library_Item(){}
};

class Book : public Library_Item{
private :
    string title;
    string author;
    bool available;

public :
    Book(string title, string author);

    void display_Info() override;
    bool Available() override;
    void borrow_Item() override;
    void return_Item() override;
};

class Magazine : public Library_Item{
private :
    string title;
    int issueNum;
    bool available;

public :
    Magazine(string title, int issueNum);

    void display_Info() override;
    bool Available() override;
    void borrow_Item() override;
    void return_Item() override;
};

#endif
