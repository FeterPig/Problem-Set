#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // int mat[n][n];
    vector<int> v;

    bool flag = false;
    int temp;
    while (cin >> temp)
    {
        if (flag)
        {
            while (temp--)
            {
                v.push_back(1);
            }
        }
        else
        {
            while (temp--)
            {
                v.push_back(0);
            }
        }

        flag = !flag;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[cnt];
            cnt++;
        }
        cout << endl;
    }

    return 0;
}