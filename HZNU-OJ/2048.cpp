#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 竖线
    int w;
    cin >> w;
    vector<int> line(w + 1);
    for (int i = 0; i <= w; i++)
    {
        // 1-based, 0置空
        line[i] = i;
    }

    // 横线
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int left = 0, right = 0;
        scanf("%d,%d", &left, &right);
        swap(line[left], line[right]);
    }

    // 输出结果
    for (int i = 1; i <= w; i++)
    {
        cout << line[i] << endl;
    }

    return 0;
}