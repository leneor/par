#include <iostream>
#include <cmath>

class Figure {
public:
    virtual double perimeter() {
        return 0;
    };
    virtual double square() {
        return 0;
    }

};

class Rectangle : public Figure {
public:
    double perimeter() override {
        return 2*(a+b);
    }
    double square() override {
        return a*b;
    }

private:
    double a;
    double b;
};

class Circle : public Figure {
public:
    Circle(int r) : r(r){};
    double perimeter() override {
        return 2*3.14*r;
    }
    double square() override {
        return 3.14*r*r;
    }

    static double pi() {
        return std::acos(-1);
    }
private:
    double r;
};

int main() {
    Circle  c(5);
    std::cout<<c.pi()<<' '<<c.square()<<std::endl;
    return 0;
}
