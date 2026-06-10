#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
    double x_, y_;

public:
    Point(double x, double y) : x_(x), y_(y) {}
    double getX() { return x_; }
    double getY() { return y_; }
};

class Line
{
private:
    Point start_, end_;

public:
    Line(Point start, Point end) : start_(start), end_(end) {}
    double slope()
    {
        return (start_.getY() - end_.getY()) / (start_.getX() - end_.getX());
    }
};

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    Point start(x1, y1);
    Point end(x2, y2);
    Line line(start, end);
    cout << line.slope() << endl;
    return 0;
}