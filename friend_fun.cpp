#include <iostream>

class B; 

class A {
private:
    int numA;

public:
    A() : numA(12) {}

    friend void display(const A& a, const B& b);
};

class B {
private:
    int numB;

public:
    B() : numB(4) {}

    friend void display(const A& a, const B& b);
};

void display(const A& a, const B& b) {
    std::cout << "Values of numA: " << a.numA << std::endl;
    std::cout << "Values of numB: " << b.numB << std::endl;
}

int main() {
    A objA;
    B objB;

    display(objA, objB);

    return 0;
}