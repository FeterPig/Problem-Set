#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int sum = a + b + c;

    cout << sum << endl;
    cout << static_cast<double>(sum) / 3 << endl;
    cout << min(min(a, b), c) << endl;
    cout << max(max(a, b), c) << endl;

    return 0;
}