#include <iostream>
using namespace std;
const double PI = 3.14159;

class Cylinder
{
private:
    double radius_, height_;

public:
    Cylinder(double radius = 1, double height = 1) : radius_(radius), height_(height) {}

    double computeVolume() { return radius_ * radius_ * PI * height_; }
    double computeSurfaceArea() { return radius_ * radius_ * PI * 2 + 2 * PI * radius_ * height_; }
};

int main()
{
    double radius, height;
    cin >> radius >> height;
    Cylinder cylinder(radius, height);
    cout << cylinder.computeVolume() << endl;
    cout << cylinder.computeSurfaceArea() << endl;
    return 0;
}