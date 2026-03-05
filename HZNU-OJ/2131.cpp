#include <bits/stdc++.h>
using namespace std;

struct Data
{
    string zkzh;
    int zs;
    int yz;
};

int N, L, H;

bool cmp(Data x, Data y)
{
    // 确定x的类型
    int class_x;
    if (x.zs >= H && x.yz >= H)
    {
        class_x = 1;
    }
    else if (x.zs >= H && x.yz < H)
    {
        class_x = 2;
    }
    else if (x.zs < H && x.yz < H && x.zs >= x.yz)
    {
        class_x = 3;
    }
    else
    {
        class_x = 4;
    }

    // 确定y的类型
    int class_y;
    if (y.zs >= H && y.yz >= H)
    {
        class_y = 1;
    }
    else if (y.zs >= H && y.yz < H)
    {
        class_y = 2;
    }
    else if (y.zs < H && y.yz < H && y.zs >= y.yz)
    {
        class_y = 3;
    }
    else
    {
        class_y = 4;
    }

    // 先按照类别排序
    if (class_x != class_y)
    {
        return class_x < class_y;
    }

    // 同类别按总分降序
    int sum_x = x.zs + x.yz;
    int sum_y = y.zs + y.yz;
    if (sum_x != sum_y)
    {
        return sum_x > sum_y;
    }

    // 总分相同按智商降序
    if (x.zs != y.zs)
    {
        return x.zs > y.zs;
    }

    // 智商相同按准考证号升序
    return x.zkzh < y.zkzh;
}

int main()
{
    cin >> N >> L >> H;

    vector<Data> v;

    for (int i = 0; i < N; i++)
    {
        Data temp;
        cin >> temp.zkzh >> temp.zs >> temp.yz;
        getchar();
        if (temp.yz >= L && temp.zs >= L)
        {
            v.push_back(temp);
        }
    }

    sort(v.begin(), v.end(), cmp);

    cout << v.size() << endl;
    for (auto x : v)
    {
        cout << x.zkzh << " " << x.zs << " " << x.yz << endl;
    }
    return 0;
}