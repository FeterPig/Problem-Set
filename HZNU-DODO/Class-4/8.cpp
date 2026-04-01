#include <iostream>
using namespace std;
// 请在此处编写swapValue函数
template <typename T>
void swapValue(T &a, T &b)
{
    // T c;
    // c = b;
    // b = a;
    // a = c;
    swap(a, b);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int i1, i2;
        cin >> i1 >> i2;
        double d1, d2;
        cin >> d1 >> d2;
        char ch1, ch2;
        cin >> ch1 >> ch2;
        swapValue(i1, i2);
        swapValue(d1, d2);
        swapValue(ch1, ch2);
        cout << i1 << " " << i2 << " "
             << d1 << " " << d2 << " "
             << ch1 << " " << ch2 << endl;
    }
    return 0;
}