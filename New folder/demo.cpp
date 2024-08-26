#include <iostream>
using namespace std;

// Base Class
class Shape {
public:
    virtual double area() {
        return 0;
    }
};

// Derived Class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() override {
        return length * width;
    }
};

// Derived Class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() override {
        return 3.14 * radius * radius;
    }
};

int main() {
    Rectangle rect(5, 3);
    Circle circle(2);

    std::cout << "Area of Rectangle: " << rect.area() << std::endl;
    std::cout << "Area of Circle: " << circle.area() << std::endl;

    return 0;
}