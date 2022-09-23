#include "diamond.h"

using namespace hum;

AbsStore::AbsStore() {
    isopen_ = false;
}

AbsStore::~AbsStore() {

}

void AbsStore::open() {
    isopen_ = true;
}

void AbsStore::close() {
    isopen_ = false;
}

BookStore::BookStore() {

}

BookStore::~BookStore() {

}

void BookStore::display() {
    if (!isopen_) {
        return;
    }
    for (auto iter = goods_.begin(); iter != goods_.end(); iter++) {
        (*iter)->show();
    }
}

bool BookStore::restock(IProduct* book) {
    goods_.push_back(book);
    return true;
}
