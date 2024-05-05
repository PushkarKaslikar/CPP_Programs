#include <iostream>

class Base {
public:
    int baseVar;
};

class DerivedA : virtual public Base {
public:
    int derivedAVar;
};

class DerivedB : virtual public Base {
public:
    int derivedBVar;
};

class DerivedAB : public DerivedA, public DerivedB {
public:
    int derivedABVar;
};

int main() {
    DerivedAB obj;

    obj.baseVar = 10;
    obj.derivedAVar = 20;
    obj.derivedBVar = 30;
    obj.derivedABVar = 40;

    DerivedA* ptrA = &obj;
    DerivedB* ptrB = &obj;

    std::cout << "BaseVar accessed via pointer A: " << ptrA->baseVar << std::endl;
    std::cout << "DerivedAVar accessed via pointer A: " << ptrA->derivedAVar << std::endl;
    std::cout << "BaseVar accessed via pointer B: " << ptrB->baseVar << std::endl;
    std::cout << "DerivedBVar accessed via pointer B: " << ptrB->derivedBVar << std::endl;

    return 0;
}