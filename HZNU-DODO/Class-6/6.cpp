#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str[5];
    for (auto &&i : str)
    {
        cin >> i;
    }

    sort(str, str + 5, [](string s1, string s2)
         { return s1 < s2; });

    for (auto &&i : str)
    {
        cout << i << endl;
    }

    return 0;
}