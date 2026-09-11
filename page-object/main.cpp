#include "page_object.h"

int main(){
    Page_Object object;

    object.add_Item();
    object.remove_Item();
    object.delete_Item();

    std::cout << endl;

    page Page;

    Page.add_Item();
    Page.remove_Item();
    Page.delete_Item();

    std::cout << endl;

    Copy copy;
    copy.add_Item();
    copy.remove_Item();
    copy.delete_Item();


return 0;
}
