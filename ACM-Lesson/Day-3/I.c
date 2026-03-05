// 实则就是解方程组

#include <stdio.h>
int main()
{
    int n, x, k;
    scanf("%d", &n);

    for (int i = 1; i <= 100; i++)
    {
        for (int j = 200; j >= 1; j--)
        {
            if (i * 7 + j * 21 == n / 52)
            {
                x = i;
                k = j;
            }
        }
    }
    printf("%d\n%d", x, k);
    return 0;
}