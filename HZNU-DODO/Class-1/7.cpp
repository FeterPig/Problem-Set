#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int h1, m1, h2, m2;

    h1 = a / 100;
    m1 = a % 100;
    h2 = b / 100;
    m2 = b % 100;

    int t1 = h1 * 60 + m1;
    int t2 = h2 * 60 + m2;

    int sub = t2 - t1;

    int sh, sm;
    sh = sub / 60;
    sm = sub % 60;

    cout << sh << ":" << sm << endl;

    return 0;
}