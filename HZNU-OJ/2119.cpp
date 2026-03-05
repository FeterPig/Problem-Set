#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string temp;
    stack<string> s;
    map<string, bool> m; // 是否已出栈
    for (int i = 0; i < t; i++)
    {
        cin >> temp;
        m[temp] = false;
        s.push(temp);
    }

    for (int i = 0; i < t; i++)
    {
        if (!m[s.top()])
        {
            m[s.top()] = true;
            cout << s.top() << endl;
        }
        s.pop();
    }

    return 0;
}