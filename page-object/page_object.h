#ifndef PAGEOBJECT_H
#define PAGEOBJECT_H
#include <iostream>
#include <vector>

using namespace std;

class Page_Object{
    public: 
        virtual void add_Item();
        virtual void remove_Item();
        virtual void delete_Item();
};

class page : public Page_Object{
    public:
        void add_Item() override;
        void remove_Item() override;
        void delete_Item() override;
};

class Copy : public Page_Object{
    private: 
        vector<Page_Object*> items;

    public:
        void add_Item() override;
        void remove_Item() override;
        void delete_Item() override;
};

#endif
