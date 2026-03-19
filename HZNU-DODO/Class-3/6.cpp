#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int num;
        cin >> num;

        int cnt = 0;
        while (num > 0)
        {
            if (num % 2 == 1)
            {
                cnt++;
            }
            num /= 2;
        }

        cout << cnt << endl;
    }

    return 0;
}