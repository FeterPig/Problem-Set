#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    int n;
    cin >> c >> n;

    for (int i = 1; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << ' ';
        }

        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << c;
        }
        cout << endl;
    }

    for (int j = 0; j < 2 * n - 1; j++)
    {
        cout << c;
    }
    cout << endl;

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << ' ';
        }

        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}