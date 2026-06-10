#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v;
    string tmp;
    while (cin >> tmp)
    {
        v.push_back(tmp);
    }

    int bit = 0;

    for (auto &&str : v)
    {
        if (str.size() > bit)
        {
            bit = str.size();
        }
    }

    cout << bit << endl;

    return 0;
}