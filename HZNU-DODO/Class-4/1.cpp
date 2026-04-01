#include <iostream>
#include <cmath>
using namespace std;
double computeArea(int n, double side);
int main()
{
    int n;
    cin >> n;
    double side;
    cin >> side;
    cout << computeArea(n, side) << endl;
    return 0;
}
// 请在下面编写computeArea函数
double computeArea(int n, double side)
{
    double a = n * side * side;
    double b = 4 * tan(3.14159 / n);
    return a / b;
}