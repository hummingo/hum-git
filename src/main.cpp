#include <iostream>
#include <string>

#include "object.h"

using namespace hum;

int main(int argc, char **argv) {
    std::cout << "hello, hum-git!" << std::endl;

    Object *p_base = new Derived();
    p_base->show();
    delete p_base;

    return 0;
}
