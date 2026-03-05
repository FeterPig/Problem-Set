#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // 使用cin后, 若后面有getline, 要清空缓存区
    getchar();

    string str;

    while (n--)
    {
        getline(cin, str);
        cout << str << endl
             << endl;
    }

    while (cin >> str)
    {
        cout << str << endl
             << endl;
    }

    return 0;
}