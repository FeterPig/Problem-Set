#include <iostream>
using namespace std;
// 请此处编写sum函数
int sum()
{
    return 100;
}
int sum(int a)
{
    return 100 + a;
}
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    cout << sum() << endl;
    cout << sum(6) << endl;
    cout << sum(6, 10) << endl;
    cout << sum(6, 10, 20) << endl;
    return 0;
}