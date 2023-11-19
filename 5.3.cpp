#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std;
class Form {
public:
    Form() {
        cout << "Form constructor called." << endl;
    }

    virtual ~Form() {
        cout << "Form destructor called." << endl;
    }

    virtual double computeArea() const {
        cout << "Form computeArea called." << endl;
        return 0;
    }
};

class Rectangle : public Form {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {
        cout << "Rectangle constructor called." << endl;
    }

    ~Rectangle() override {
        cout << "Rectangle destructor called." << endl;
    }

    double computeArea() const override {
        cout << "Rectangle computeArea called." << endl;
        return length * width;
    }
};

class Circle : public Form {
private:
    double radius;

public:
    Circle(double r) : radius(r) {
        cout << "Circle constructor called." <<endl;
    }

    ~Circle() override {
        cout << "Circle destructor called." << endl;
    }

    double computeArea() const override {
        cout << "Circle computeArea called." << endl;
        return M_PI * radius * radius;
    }
};

int main() {
    // Instantiate a Rectangle object
    Rectangle rect(5.0, 3.0);
    double rectArea = rect.computeArea();
    cout << "Rectangle area: " << rectArea <<endl;

    // Instantiate a Circle object
    Circle circle(2.5);
    double circleArea = circle.computeArea();
    cout << "Circle area: " << circleArea << endl;

    return 0;
}
