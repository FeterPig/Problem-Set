#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        // 模拟计算么
        int len_a = a.length();
        int len_b = b.length();

        string c;

        // 双指针
        int ptr_a = len_a - 1;
        int ptr_b = len_b - 1;
        int ptr_c = 0;
        int carry = 0; // 进位

        while (ptr_a >= 0 || ptr_b >= 0 || carry)
        {
            int now_a = 0;
            if (ptr_a >= 0)
            {
                now_a = a[ptr_a] - '0';
            }

            int now_b = 0;
            if (ptr_b >= 0)
            {
                now_b = b[ptr_b] - '0';
            }

            int now_sum = now_a + now_b + carry;

            c += ((now_sum % 2) + '0');
            carry = now_sum / 2;

            if (ptr_a >= 0)
            {
                ptr_a--;
            }
            if (ptr_b >= 0)
            {
                ptr_b--;
            }
        }

        // 反转
        reverse(c.begin(), c.end());

        for (int i = 0; i < c.length(); i++)
        {
            if (c[i] == '1')
            {
                cout << c.length() - i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}