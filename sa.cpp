#include <iostream>

using namespace std;

// Base class
class Shape {
protected:
    int area;
public:
    Shape() {
        cout << "In default constructor of Shape" << endl;
        area = 0;
    }
    Shape(int a) {
        cout << "In parameterized constructor of Shape" << endl;
        area = a;
    }
    void display() {
        cout << "Area: " << area << endl;
    }
    virtual int accept() {
        return 0;
    }
};

// Derived class Circle
class Circle : virtual public Shape {
protected:
    int radius;
    const int pie = 22 / 7;
public:
    Circle() {
        cout << "In default constructor of Circle" << endl;
        radius = 0;
    }
    Circle(int r, int a) {
        cout << "In parameterized constructor of Circle" << endl;
        radius = r;
        area = a;
    }
    int accept() override {
        int circleArea;
        circleArea = pie * (radius * radius);
        return circleArea;
    }
    void display() {
        cout << "Area of circle is: " << endl;
        cout << accept() << endl;
        cout << "Radius: " << radius << endl;
    }
};

// Derived class Rectangle
class Rectangle : virtual public Shape {
protected:
    int length;
    int breadth;
public:
    Rectangle() {
        cout << "In default constructor of Rectangle" << endl;
        area = 0;
    }
    Rectangle(int l, int b, int a) {
        cout << "In parameterized constructor of Rectangle" << endl;
        length = l;
        breadth = b;
        area = a;
    }
    int accept() override {
        int rectArea;
        rectArea = length * breadth;
        return rectArea;
    }
    void display() {
        cout << "Area of rectangle is: " << endl;
        cout << accept() << endl;
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
    }
};

// Derived class Triangle
class Triangle : public Circle, public Rectangle {
private:
    int base;
    int height;
    const int half = 1 / 2;
public:
    Triangle() {
        cout << "In default constructor of Triangle" << endl;
    }
    Triangle(int b, int h, int r, int l, int br) {
        cout << "In parameterized constructor of Triangle" << endl;
        base = b;
        height = h;
        radius = r;
        length = l;
        breadth = br;
    }
    int accept() {
        int triArea;
        triArea = half * (base * height);
        return triArea;
    }
    void display() {
        cout << "Area of triangle is: " << endl;
        cout << accept() << endl;
        cout << "Base: " << base << endl;
        cout << "Height: " << height << endl;
    }
};

int main() {
    Triangle triangle(10, 20, 5, 15, 10);
    triangle.display();
    return 0;
}
