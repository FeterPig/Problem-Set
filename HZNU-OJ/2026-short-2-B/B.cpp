#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= 300)
            {
                cnt++;
            }
        }
        if (cnt >= 5)
        {
            cout << "Penta Kill" << endl;
        }
        else
        {
            cout << "Shut Down" << endl;
        }
    }

    return 0;
}
