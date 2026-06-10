#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    int getX() const { return x; }
    int getY() const { return y; }
};

class Arc
{
    Point p;
    double radius;

public:
    Arc(Point pt, double r) : p(pt), radius(r) {}
    void draw() const
    {
        cout << "Drawing an arc: Center(" << p.getX() << ", " << p.getY()
             << "), radius(" << radius << ")" << endl;
    }
};

class Circle
{
    Point p;
    double radius;

public:
    Circle(Point pt, double r) : p(pt), radius(r) {}
    void draw() const
    {
        cout << "Drawing a circle: Center(" << p.getX() << ", " << p.getY()
             << "), radius(" << radius << ")" << endl;
    }
};

class Ellipse
{
    Point p;
    double xRadius, yRadius;

public:
    Ellipse(Point pt, double xr, double yr) : p(pt), xRadius(xr), yRadius(yr) {}
    void draw() const
    {
        cout << "Drawing an ellipse: Center(" << p.getX() << ", " << p.getY()
             << "), x-axis(" << xRadius << "), y-axis(" << yRadius << ")" << endl;
    }
};

class Rectangle
{
    Point p;
    double width, height;

public:
    Rectangle(Point pt, double w, double h) : p(pt), width(w), height(h) {}
    void draw() const
    {
        cout << "Drawing a rectangle: Upper left corner coordinates("
             << p.getX() << ", " << p.getY() << "), Width("
             << width << "), Height(" << height << ")" << endl;
    }
};

class Mix : public Arc, public Circle, public Ellipse, public Rectangle
{
public:
    Mix(Point p, double arcRad, double circleRad)
        : Arc(p, arcRad),
          Circle(p, circleRad),
          Ellipse(p, arcRad, circleRad),
          Rectangle(p, arcRad, circleRad) {}
    void draw() const
    {
        Arc::draw();
        Circle::draw();
        Ellipse::draw();
        Rectangle::draw();
    }
};

int main()
{
    Point p(320, 240);
    Mix mix(p, 100, 70);
    mix.draw();
    return 0;
}