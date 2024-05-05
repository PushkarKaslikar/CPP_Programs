#include <iostream>

class Base {
public:
    virtual void display() {
        std::cout << "Display function in Base class" << std::endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        std::cout << "Display function in Derived class" << std::endl;
    }
};

int main() {
    Base* ptr = new Derived();

    ptr->display();


    return 0;
}