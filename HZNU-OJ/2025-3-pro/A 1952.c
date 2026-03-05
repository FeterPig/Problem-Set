#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int a = 0; // 4的个数
    int b = 0; // 7的个数

    // 解方程
    // a + b = i;
    // 4a + 7b = n;
    // 解得b = (n - 4i) / 3，a = i - b;

    int bit_min;
    if (n % 7 == 0)
    {
        bit_min = n / 7;
    }
    else
    {
        bit_min = n / 7 + 1;
    }

    int bit_max = n / 4;

    for (int i = bit_min; i <= bit_max; i++)
    {
        if ((n - 4 * i) >= 0 && (n - 4 * i) % 3 == 0)
        {
            b = (n - 4 * i) / 3;
            a = i - b;

            if (a >= 0)
            {
                for (int j = 0; j < a; j++)
                {
                    printf("4");
                }
                for (int j = 0; j < b; j++)
                {
                    printf("7");
                }
                return 0;
            }
        }
    }

    printf("-1");

    return 0;
}