#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        bool isFound = false;
        while (n--)
        {
            int w;
            cin >> w;
            if (w == k)
            {
                isFound = true;
                break;
            }
        }

        if (isFound)
        {
            cout << "madan" << endl;
        }
        else
        {
            cout << "why am I so diao" << endl;
        }
    }

    return 0;
}