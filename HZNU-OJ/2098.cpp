#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    a = abs(a);
    b = abs(b);
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int N;
    cin >> N;

    long long total_num = 0, total_fenmu = 1;

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;

        // 确定分数线位置
        size_t pos = s.find('/');

        // stoll() == string to long long
        long long a = stoll(s.substr(0, pos));  // 分子
        long long b = stoll(s.substr(pos + 1)); // 分母

        long long new_num = total_num * b + a * total_fenmu;
        long long new_fenmu = total_fenmu * b;

        // 约分
        long long g = gcd(new_num, new_fenmu);
        if (g != 0)
        {
            new_num /= g;
            new_fenmu /= g;
        }

        // 保证分母为正, 符号由分子决定
        if (new_fenmu < 0)
        {
            new_num = -new_num;
            new_fenmu = -new_fenmu;
        }

        total_num = new_num;
        total_fenmu = new_fenmu;
    }

    if (total_num == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    bool is_fushu = (total_num < 0);
    long long num = abs(total_num);
    long long fenmu = total_fenmu;

    long long integer = num / fenmu;
    long long fenzi = num % fenmu;

    if (fenzi == 0)
    {
        // 纯整数
        if (is_fushu)
        {
            cout << "-";
        }
        cout << integer << endl;
    }
    else if (integer == 0)
    {
        // 纯分数
        if (is_fushu)
        {
            cout << "-";
        }
        cout << fenzi << "/" << fenmu << endl;
    }
    else
    {
        // 带分数
        if (is_fushu)
        {
            cout << "-";
        }
        cout << integer << " " << fenzi << "/" << fenmu << endl;
    }

    return 0;
}