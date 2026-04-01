#include <iostream>
using namespace std;
int f(int);
int sum(int (*fp)(int), int, int);
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int result = sum(f, num1, num2);
    cout << result << endl;
    return 0;
}
// 请在下面分别编写f函数和sum函数
int f(int n)
{
    return n * n;
}
int sum(int (*fp)(int), int a, int b)
{
    int sum_v = 0;
    for (int i = a; i <= b; i++)
    {
        sum_v += fp(i);
    }
    return sum_v;
}