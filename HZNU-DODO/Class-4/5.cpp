#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
// 请在此处分别编写isValid函数和computeArea函数
#include <algorithm>
#include <vector>
const double PI = 3.14159;
inline bool isValid(double side1, double side2, double side3)
{
    vector<double> v(3);
    v[0] = side1;
    v[1] = side2;
    v[2] = side3;
    sort(v.begin(), v.end());
    return v[0] + v[1] > v[2];
}
double computeArea(double r)
{
    return PI * r * r;
}
double computeArea(double a, double b)
{
    return a * b;
}
double computeArea(double a, double b, double c)
{
    if (isValid(a, b, c))
    {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    else
    {
        return 0;
    }
}
int main()
{
    double radius;
    cin >> radius;
    double width, height;
    cin >> width >> height;
    double side1, side2, side3;
    cin >> side1 >> side2 >> side3;
    cout << fixed << setprecision(2);
    cout << computeArea(radius) << endl;
    cout << computeArea(width, height) << endl;
    cout << computeArea(side1, side2, side3) << endl;
    return 0;
}