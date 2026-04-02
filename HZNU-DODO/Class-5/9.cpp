#include <bits/stdc++.h>
using namespace std;

int arr[10][10];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        arr[i][0] = 1;
        for (int j = 1; j <= i; j++)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}