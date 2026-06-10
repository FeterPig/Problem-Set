#include <iostream>
using namespace std;
const double PI = 3.14159;

class Circle
{
public:
    double r_;
    Circle(double r) : r_(r) {}

    bool operator<(const Circle &other) { return this->r_ < other.r_; }
    bool operator<=(const Circle &other) { return this->r_ <= other.r_; }
    bool operator==(const Circle &other) { return this->r_ == other.r_; }
    bool operator!=(const Circle &other) { return this->r_ != other.r_; }
    bool operator>(const Circle &other) { return this->r_ > other.r_; }
    bool operator>=(const Circle &other) { return this->r_ >= other.r_; }
};

int main()
{
    double radius1, radius2;
    cin >> radius1 >> radius2;
    Circle c1(radius1);
    Circle c2(radius2);
    cout << boolalpha;
    cout << (c1 < c2) << endl;
    cout << (c1 <= c2) << endl;
    cout << (c1 == c2) << endl;
    cout << (c1 != c2) << endl;
    cout << (c1 > c2) << endl;
    cout << (c1 >= c2) << endl;
    return 0;
}