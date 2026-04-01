#include <iostream>
#include <cmath>
using namespace std;
// 请在此处编写squareRoot函数
double squareRoot(double x)
{
    if (x >= 0)
    {
        return sqrt(x);
    }
    else
    {
        throw -1;
    }
}
int main()
{
    double x;
    cin >> x;
    try
    {
        cout << squareRoot(x) << endl;
    }
    catch (int)
    {
        cout << "Invalid" << endl;
    }
    return 0;
}