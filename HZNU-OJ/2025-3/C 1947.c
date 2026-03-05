#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int n;     // 总奖金数
        int count; // 钞票数量
        scanf("%d", &n);

        for (int a = 100; a >= 0; a--)
        {
            for (int b = 2; b >= 0; b--)
            {
                for (int c = 5; c >= 0; c--)
                {
                    for (int d = 2; d >= 0; d--)
                    {
                        for (int e = 10; e >= 0; e--)
                        {
                            if ((a * 100 + b * 50 + c * 10 + d * 5 + e * 1) > n)
                            {
                                continue;
                            }
                            if ((a * 100 + b * 50 + c * 10 + d * 5 + e * 1) == n)
                            {
                                count = a + b + c + d + e;
                                printf("%d\n", count);
                                goto end;
                            }
                        }
                    }
                }
            }
        }
    end:
    }
    return 0;
}
