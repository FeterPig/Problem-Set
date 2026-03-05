#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int v[3];
    for (int i = 0; i < s.size();)
    {
        if (s[i] != 'a' && s[i] != 'b' && s[i] != 'c')
        {
            i++;
            continue;
        }
        int j = s[i] - 'a';
        i += 3;
        if (s[i] >= '0' && s[i] <= '9')
        {
            v[j] = s[i] - '0';
        }
        else
        {
            v[j] = v[s[i] - 'a'];
        }
        i += 2;
    }
    cout << v[0] << " " << v[1] << " " << v[2];

    return 0;
}
