#include <iostream>
#include <fstream>
using namespace std;

class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle(double w = 1, double h = 1) : width(w), height(h) {}

    void setWidth(double w) { width = w; }
    void setHeight(double h) { height = h; }

    double getWidth() const { return width; }
    double getHeight() const { return height; }

    double computeArea() const { return width * height; }
    double computePerimeter() const { return 2 * (width + height); }
};

int main()
{
    Rectangle r1(1, 1), r2(2, 2), r3(3, 3), r4(4, 4), r5(5, 5);

    fstream file("object.dat", ios::binary | ios::out);
    file.write((char *)&r1, sizeof(Rectangle));
    file.write((char *)&r2, sizeof(Rectangle));
    file.write((char *)&r3, sizeof(Rectangle));
    file.write((char *)&r4, sizeof(Rectangle));
    file.write((char *)&r5, sizeof(Rectangle));
    file.close();

    file.open("object.dat", ios::binary | ios::in | ios::out);
    file.seekp(2 * sizeof(Rectangle));
    r3.setWidth(10);
    r3.setHeight(3.5);
    file.write((char *)&r3, sizeof(Rectangle));
    file.close();

    return 0;
}