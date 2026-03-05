#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum_a = 0;
    int sum_b = 0;

    for (int i = 1; i <= 1000; i++)
    {
        int num = i;

        int num_1 = 0;
        int num_0 = 0;

        while (num > 0)
        {
            if (num & 1)
            {
                num_1++;
            }
            else
            {
                num_0++;
            }
            num >>= 1;
        }

        if (num_1 > num_0)
        {
            sum_a++;
        }
        else
        {
            sum_b++;
        }
    }

    cout << sum_a << " " << sum_b << endl;

    return 0;
}