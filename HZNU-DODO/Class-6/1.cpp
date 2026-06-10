#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    string str_r = str;
    reverse(str_r.begin(), str_r.end());
    if (str == str_r)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}