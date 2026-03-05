// 我去括号匹配

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 不对不是括号匹配...
    string str;
    while (getline(cin, str))
    {
        if (str == "p")
        {
            break;
        }

        int l = 0, r = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '{')
            {
                l++;
            }
            if (str[i] == '}')
            {
                r++;
            }
            if (str[i] == '#')
            {
                break;
            }
        }

        if (l == r)
        {
            cout << "paired" << endl;
        }
        else
        {
            cout << "unpaired" << endl;
        }
    }

    return 0;
}