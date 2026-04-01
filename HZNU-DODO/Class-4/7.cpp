#include <iostream>
#include <iomanip>
using namespace std;
long sequence(int n);
int main()
{
    int count = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << setw(6) << sequence(i);
        ++count;
        if (count % 5 == 0)
            cout << endl;
    }
    return 0;
}
// 请在下面编写sequence函数
long sequence(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    if (n > 2)
    {
        return sequence(n - 1) + sequence(n - 2) + sequence(n - 3);
    }
}