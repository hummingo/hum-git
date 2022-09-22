#include <vector>

namespace hum {

class Object {
public:
    Object() {};
    virtual ~Object() {};

    virtual void show() = 0;
};

class Derived : public Object {
public:
    Derived();
    ~Derived();

    void show();
};

};

