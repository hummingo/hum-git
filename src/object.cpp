#include "object.h"

#include <iostream>

using namespace hum;

Derived::Derived() {

}

Derived::~Derived() {

}

void Derived::show() {
    std::cout << "Derived" << std::endl;
}
