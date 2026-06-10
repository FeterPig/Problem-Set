#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width_, height_;

public:
    Rectangle() : width_(1), height_(1) {}
    Rectangle(double width, double height) : width_(width), height_(height) {}

    void setWidth(double width) { width_ = width; }
    void setHeight(double height) { height_ = height; }

    double getWidth() { return width_; }
    double getHeight() { return height_; }

    double computeArea() { return width_ * height_; }
    double computePerimeter() { return 2 * (width_ + height_); }
};

int main()
{
    double width, height;
    cin >> width >> height;
    Rectangle rect1;
    rect1.setWidth(width);
    rect1.setHeight(height);
    cin >> width >> height;
    Rectangle rect2(width, height);
    cout << rect1.computeArea() << " " << rect1.computePerimeter() << endl;
    cout << rect2.computeArea() << " " << rect2.computePerimeter() << endl;
    return 0;
}