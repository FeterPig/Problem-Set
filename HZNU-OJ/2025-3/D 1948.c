#include <stdio.h>

int main()
{
    int n; // 输入一个正整数n

    while (scanf("%d", &n) == 1)
    {
        float sum = 0.0; // 前n项和
        for (int i = 0; i < n; i++)
        {
            if ((i + 1) % 2 == 1) // 第奇数项
            {
                sum += 1.0 / ((i + 1) * 2 - 1);
            }
            if ((i + 1) % 2 == 0) // 第偶数项
            {
                sum -= 1.0 / ((i + 1) * 2 - 1);
            }
        }
        printf("%.5f\n", sum);
    }

    return 0;
}