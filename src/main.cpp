#include <iostream>
#include <string>

#include "object.h"
#include "diamond.h"

using namespace hum;

int main(int argc, char **argv) {
    std::cout << "hello, hum-git!" << std::endl;

    Object *p_base = new Derived();
    p_base->show();
    delete p_base;

    Book* book = new Book();
    book->setBookID("20220923001");
    
    AbsStore* store = new BookStore();
    store->open();
    std::cout << "first disply" << std::endl;
    store->display();
    std::cout << "second disply" << std::endl;
    store->restock(book);
    store->display();
    store->close();
    delete store;
    delete book;

    return 0;
}
