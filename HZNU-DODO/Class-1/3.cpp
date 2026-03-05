#include <iostream>
using namespace std;

int main()
{
    int old_num;
    int a, b, c, d;

    cin >> old_num;

    a = old_num / 1000;
    b = old_num % 1000 / 100;
    c = old_num % 100 / 10;
    d = old_num % 10;

    a = (a + 9) % 10;
    b = (b + 9) % 10;
    c = (c + 9) % 10;
    d = (d + 9) % 10;

    cout << c * 1000 + d * 100 + a * 10 + b << endl;

    return 0;
}