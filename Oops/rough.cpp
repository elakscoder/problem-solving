#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor called." << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() : Base() { // Call Base class constructor explicitly
        std::cout << "Derived constructor called." << std::endl;
    }
};

int main() {
    Derived d;
    return 0;
}
