// STL Practice —— 【sort (1)】

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Data
{
    string a;
    int b;
    int c;
};

bool cmp(Data x, Data y)
{
    if (x.c > y.c)
    {
        return true;
    }
    else if (x.c == y.c)
    {
        if (x.b > y.b)
        {
            return true;
        }
        else if (x.b == y.b)
        {
            return x.a < y.a;
        }
    }
    return false;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<Data> v;

        while (N--)
        {
            Data temp;
            cin >> temp.a >> temp.b >> temp.c;
            v.push_back(temp);
        }
        sort(v.begin(), v.end(), cmp);
        for (Data temp : v)
        {
            cout << temp.a << " " << temp.b << " " << temp.c << endl;
        }
        cout << endl;
    }

    return 0;
}