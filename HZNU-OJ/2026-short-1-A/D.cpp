#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (cin >> s, s != "!")
    {
        for (auto &&i : s)
        {
            if (isupper(i))
            {
                cout << (char)('A' + (i + 3 - 'A') % 26);
            }
            if (islower(i))
            {
                cout << (char)('a' + (i + 13 - 'a') % 26);
            }
        }
        cout << endl;
    }

    return 0;
}