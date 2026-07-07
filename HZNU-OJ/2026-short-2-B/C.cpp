#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }

    sort(v.begin(), v.end(), [](int a, int b)
         {
             if (a + b == 0)
             {
                 return a < b;
             }
             else
             {
                 return abs(a) < abs(b);
             } });

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }

    return 0;
}