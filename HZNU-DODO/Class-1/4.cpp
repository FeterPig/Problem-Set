#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool a, b;
    a = (n % 2 == 0);
    b = (n % 3 == 0);

    cout << boolalpha;

    cout << n << " divisible by 2 and 3? ";
    cout << (a && b) << endl;

    cout << n << " divisible by 2 or 3? ";
    cout << (a || b) << endl;

    cout << n << " divisible by 2 or 3, but not both? ";
    cout << ((a && !b) || (b && !a)) << endl;

    return 0;
}