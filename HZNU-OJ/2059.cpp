#include <bits/stdc++.h>
using namespace std;

struct Data
{
    int a;
    int b;
};

bool cmp(Data x, Data y)
{
    if (x.a < y.a)
    {
        return true;
    }
    else if (x.a == y.a)
    {
        if (x.b < y.b)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<Data> i;

    for (int t = 0; t < n; t++)
    {
        Data temp;
        cin >> temp.a >> temp.b;
        i.push_back(temp);
    }

    sort(i.begin(), i.end(), cmp);

    int sum = 0;

    for (int t = 0; t < n; t++)
    {
        if (i[t].b >= sum)
        {
            sum = i[t].b;
        }
        else
        {
            sum = i[t].a;
        }
    }

    cout << sum << endl;

    return 0;
}