#include <iostream>

class Shape {
public:
    virtual void draw() const = 0;
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a rectangle" << std::endl;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;

    circle.draw();
    rectangle.draw();

    return 0;
}