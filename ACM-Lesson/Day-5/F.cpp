#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int lens = s.size(), lent = t.size();

    int a = 1, b = 1;
    for (int i = 0; i < lens; i++)
    {
        a = a * (s[i] - 'A' + 1);
    }
    for (int i = 0; i < lent; i++)
    {
        b = b * (t[i] - 'A' + 1);
    }
    cout << ((a % 47) == (b % 47) ? "GO" : "STAY");
    
    return 0;
}
