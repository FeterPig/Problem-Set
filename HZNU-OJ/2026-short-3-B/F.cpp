#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    int m;
    cin >> n >> m;
    bool isFake = (n < 0);
    while (m--)
    {
        string s;
        cin >> s;
        if (s == "Add")
        {
            long long x;
            cin >> x;
            n += x;
            if (n < 0)
            {
                isFake = true;
            }
        }
        else if (s == "Sub")
        {
            long long x;
            cin >> x;
            n -= x;
            if (n < 0)
            {
                isFake = true;
            }
        }
        else if (s == "Query")
        {
            if (isFake)
            {
                cout << "fake news!" << endl;
            }
            else
            {
                cout << n << endl;
            }
        }
    }

    return 0;
}
