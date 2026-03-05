#include <bits/stdc++.h>
using namespace std;

string func(int n)
{
    if (n == 0)
        return "0";
    if (n == 1)
        return "2(0)";
    if (n == 2)
        return "2";

    vector<int> pos_1;
    int temp = n;
    int n_bit = 0;
    while (temp > 0)
    {
        if (temp & 1)
        {
            pos_1.push_back(n_bit);
        }
        // 二进制序列右移一位
        temp >>= 1;
        n_bit++;
    }

    string res = "";
    for (int i = pos_1.size() - 1; i >= 0; i--)
    {
        if (i != pos_1.size() - 1)
            res += "+";

        int p = pos_1[i];
        if (p == 0)
        {
            res += "2(0)";
        }
        else if (p == 1)
        {
            res += "2";
        }
        else
        {
            res += "2(" + func(p) + ")";
        }
    }

    return res;
}

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << func(n) << endl;
    }
    return 0;
}