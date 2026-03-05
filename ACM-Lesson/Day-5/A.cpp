#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    string str;
    getline(cin, str);

    for (auto c : str)
    {
        if (c == 's' || c == 'z')
        {
            ans += 4;
        }
        else if (c == 'c' || c == 'f' || c == 'i' || c == 'l' || c == 'o' || c == 'r' || c == 'v' || c == 'y')
        {
            ans += 3;
        }
        else if (c == 'b' || c == 'e' || c == 'h' || c == 'k' || c == 'n' || c == 'q' || c == 'u' || c == 'x')
        {
            ans += 2;
        }
        else
        {
            ans++;
        }
    }
    cout << ans;

    return 0;
}
