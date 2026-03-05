#include <iostream>
using namespace std;
int main()
{
    int n, sum, a;
    while (cin >> n, n)
    {
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
        }
        cout << sum << endl;
    }

    return 0;
}