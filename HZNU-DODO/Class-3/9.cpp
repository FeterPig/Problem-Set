#include <bits/stdc++.h>
using namespace std;

double arr[100];

int main()
{
    cin >> arr[0];
    if (arr[0] == 0)
    {
        cout << '0' << endl;
        return 0;
    }

    for (int i = 0; i < 99; i++)
    {
        arr[i + 1] = 1.0 / 3 * (2 * arr[i] + 1.0 * arr[0] / arr[i] / arr[i]);
        if (abs(arr[i + 1] - arr[i]) < 0.000001)
        {
            cout << arr[i + 1] << endl;
            break;
        }
    }

    return 0;
}