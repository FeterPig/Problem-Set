#include <bits/stdc++.h>
using namespace std;

char toDigit(char c)
{
    if (c >= 'a' && c <= 'c')
        return '2';
    if (c >= 'd' && c <= 'f')
        return '3';
    if (c >= 'g' && c <= 'i')
        return '4';
    if (c >= 'j' && c <= 'l')
        return '5';
    if (c >= 'm' && c <= 'o')
        return '6';
    if (c >= 'p' && c <= 's')
        return '7';
    if (c >= 't' && c <= 'v')
        return '8';
    if (c >= 'w' && c <= 'z')
        return '9';
    return c;
}

int main()
{
    string s;
    while (cin >> s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                char c = tolower(s[i]) + 1;
                if (c > 'z')
                    c = 'a';
                cout << c;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                cout << toDigit(s[i]);
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}
