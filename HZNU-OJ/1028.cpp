// STL Practice —— 【map (3)】

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int c;
        cin >> c;

        // 指数:系数
        map<int, int> m;

        while (c--)
        {
            int zhishu, xishu;
            cin >> xishu >> zhishu;
            if (m.find(zhishu) == m.end())
            {
                m[zhishu] = xishu;
            }
            else
            {
                m[zhishu] += xishu;
            }
        }
        // 反向迭代器
        bool flag = false;
        bool output = false;
        for (auto p = m.rbegin(); p != m.rend(); p++)
        {
            if (p->second == 0)
            {
                continue;
            }

            output = true;

            if (!flag && p->second < 0)
            {
                p->second = abs(p->second);
                cout << "-";
            }

            if (flag)
            {
                if (p->second > 0)
                {
                    cout << "+";
                }
                if (p->second < 0)
                {
                    p->second = abs(p->second);
                    cout << "-";
                }
            }

            if (p->second != 1)
            {
                cout << p->second;
            }
            else if (p->first == 0)
            {
                cout << 1;
            }

            if (p->first != 0)
            {

                cout << "x";
                if (p->first != 1)
                {
                    cout << "^" << p->first;
                }
            }

            flag = true;
        }
        if (!output)
        {
            cout << 0;
        }

        cout << endl;
    }

    return 0;
}