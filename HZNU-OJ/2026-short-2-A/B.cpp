#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    int n;
    while (cin >> s1 >> s2 >> n)
    {
        s2.insert(n, s1);
        cout << s2 << endl;
    }

    return 0;
}
