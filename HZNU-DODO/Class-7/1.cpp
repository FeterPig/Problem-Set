#include <iostream>
using namespace std;

class Point
{
public:
    Point() : x_(0), y_(0) {}
    Point(double x, double y) : x_(x), y_(y) {}
    double getX() { return x_; }
    double getY() { return y_; }

private:
    double x_, y_;
};

int main()
{
    double x, y;
    char ignore;
    cin >> x >> ignore >> y;
    Point p1(x, y);
    cin >> x >> ignore >> y;
    Point p2(x, y);
    cout << "(" << p1.getX() << "," << p1.getY() << ")" << endl;
    cout << "(" << p2.getX() << "," << p2.getY() << ")" << endl;
    return 0;
}