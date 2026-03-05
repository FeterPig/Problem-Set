#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 提升 cin / cout 效率
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v;

    while (n--)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());
    for (int num : v)
    {
        cout << num << " ";
    }
    cout << "\n";

    int m;
    cin >> m;

    while (m--)
    {
        int temp;
        cin >> temp;

        // TLE超时
        // for (int i = v.size() - 1; i >= 0; i--)
        // {
        //     if (v[i] == temp)
        //     {
        //         cout << i + 1 << endl;
        //         break;
        //     }
        // }

        // 优化: 使用二分查找
        auto it = upper_bound(v.begin(), v.end(), temp);
        cout << (it - v.begin()) << "\n";
    }

    return 0;
}