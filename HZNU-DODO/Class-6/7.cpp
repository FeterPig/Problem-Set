#include <bits/stdc++.h>
using namespace std;

int cnt[5];

int main()
{
    string str;
    getline(cin, str);

    for (char c : str)
    {
        if (isalpha(c))
        {
            switch (tolower(c))
            {
            case 'a':
                cnt[0]++;
                break;
            case 'e':
                cnt[1]++;
                break;
            case 'i':
                cnt[2]++;
                break;
            case 'o':
                cnt[3]++;
                break;
            case 'u':
                cnt[4]++;
                break;
            default:
                break;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << cnt[i] << ' ';
    }

    return 0;
}