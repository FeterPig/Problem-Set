#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const double PI = 3.14159;

class Shape
{
public:
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void show() const = 0;
    string getClassName() const { return "Shape"; }
};

class Circle : public Shape
{
    double radius;

public:
    Circle(double r = 1) : radius(r) {}
    double getRadius() const { return radius; }
    void setRadius(double r) { radius = r; }
    double getArea() const { return PI * radius * radius; }
    double getPerimeter() const { return 2 * PI * radius; }
    void show() const { cout << "Radius:" << radius << endl; }
    string getClassName() const { return "Circle"; }
};

class Rectangle : public Shape
{
    double width, height;

public:
    Rectangle(double w = 1, double h = 1) : width(w), height(h) {}
    double getWidth() const { return width; }
    double getHeight() const { return height; }
    void setWidth(double w) { width = w; }
    void setHeight(double h) { height = h; }
    double getArea() const { return width * height; }
    double getPerimeter() const { return 2 * (width + height); }
    void show() const { cout << "Width:" << width << ", Height:" << height << endl; }
    string getClassName() const { return "Rectangle"; }
};

class Triangle : public Shape
{
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}
    double getArea() const
    {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    double getPerimeter() const { return side1 + side2 + side3; }
    void show() const { cout << "Side:" << side1 << ", " << side2 << ", " << side3 << endl; }
    string getClassName() const { return "Triangle"; }
};

int main()
{
    double radius, width, height, side1, side2, side3;
    cin >> radius;
    Circle circle(radius);
    cin >> width >> height;
    Rectangle rectangle(width, height);
    cin >> side1 >> side2 >> side3;
    Triangle triangle(side1, side2, side3);
    cout << circle.getClassName() << ":" << endl;
    circle.show();
    cout << "Area:" << circle.getArea();
    cout << ", Perimeter:" << circle.getPerimeter() << endl;
    cout << rectangle.getClassName() << ":" << endl;
    rectangle.show();
    cout << "Area:" << rectangle.getArea();
    cout << ", Perimeter:" << rectangle.getPerimeter() << endl;
    cout << triangle.getClassName() << ":" << endl;
    triangle.show();
    cout << "Area:" << triangle.getArea();
    cout << ", Perimeter:" << triangle.getPerimeter() << endl;
    return 0;
}