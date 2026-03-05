#include <bits/stdc++.h>
using namespace std;

int main()
{
    string temp, str;
    cin >> str;
    int n = str.length();
    while (cin >> temp)
    {
        str += temp;
    }

    cout << n << " ";

    // 从0开始
    if (str[0] != '0')
    {
        cout << "0 ";
    }

    int t = 1;
    for (int i = 1; i < n * n; i++)
    {
        if (str[i] == str[i - 1])
        {
            t++;
        }
        else
        {
            cout << t << " ";
            t = 1;
        }
    }
    cout << t;

    return 0;
}