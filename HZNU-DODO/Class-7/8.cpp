#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class TriangleException
{
private:
    string message_;

public:
    TriangleException() { message_ = "Exception!"; }
    TriangleException(string message) { message_ = message; }
    string what() { return message_; }
};

class Triangle
{
private:
    double side1_, side2_, side3_;
    bool isValid(double side1, double side2, double side3)
    {
        double max_side = max(side1, max(side2, side3));
        double sum = side1 + side2 + side3;
        return sum - max_side > max_side;
    }
    bool check(double side) { return side > 0; }

public:
    Triangle(double side1 = 1, double side2 = 1, double side3 = 1)
    {
        if (!(check(side1) && check(side2) && check(side3)))
        {
            throw TriangleException("Negative side");
        }
        else if (!isValid(side1, side2, side3))
        {
            throw TriangleException("Don't make a triangle");
        }
        else
        {
            side1_ = side1;
            side2_ = side2;
            side3_ = side3;
        }
    }
    void setSide1(double val)
    {
        if (!check(val) || !isValid(val, side2_, side3_))
        {
            throw TriangleException();
        }
        side1_ = val;
    }
    void setSide2(double val)
    {
        if (!check(val) || !isValid(side1_, val, side3_))
        {
            throw TriangleException();
        }
        side2_ = val;
    }
    void setSide3(double val)
    {
        if (!check(val) || !isValid(side1_, side2_, val))
        {
            throw TriangleException();
        }
        side3_ = val;
    }
    double getSide1() { return side1_; }
    double getSide2() { return side2_; }
    double getSide3() { return side3_; }
    double computePerimeter() { return side1_ + side2_ + side3_; }
    double computeArea()
    {
        double s = (side1_ + side2_ + side3_) / 2;
        return sqrt(s * (s - side1_) * (s - side2_) * (s - side3_));
    }
};

int main()
{
    double side1, side2, side3;
    try
    {
        cin >> side1 >> side2 >> side3;
        Triangle triangle(side1, side2, side3);
        cout << triangle.computePerimeter() << " "
             << triangle.computeArea() << endl;
    }
    catch (TriangleException &ex)
    {
        cout << ex.what() << endl;
    }
    return 0;
}