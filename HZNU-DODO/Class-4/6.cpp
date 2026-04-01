#include <iostream>
using namespace std;
// 请在此处编写compare函数
template <typename T>
int compare(T value1, T value2)
{
    if (value1 < value2)
    {
        return -1;
    }
    if (value1 > value2)
    {
        return 1;
    }
    if (value1 == value2)
    {
        return 0;
    }
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    double d1, d2;
    cin >> d1 >> d2;
    char ch1, ch2;
    cin >> ch1 >> ch2;
    cout << compare(n1, n2) << endl;
    cout << compare(d1, d2) << endl;
    cout << compare(ch1, ch2) << endl;
    return 0;
}