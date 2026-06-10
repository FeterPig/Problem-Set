#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    long long num = 0;

    for (auto &&c : str)
    {
        if (isdigit(c))
        {
            num = num * 10 + (c - '0');
        }
    }

    cout << num << endl;

    return 0;
}