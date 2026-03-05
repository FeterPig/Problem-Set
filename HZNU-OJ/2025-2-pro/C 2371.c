#include <stdio.h>

int is_2n(int x)
{
    while (x % 2 == 0) // 偶数
    {
        x = x / 2;
    }

    if (x == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int x = 0;

    while (scanf("%d", &x) == 1)
    {
        if (x % 1024 == 0)
        {
            printf("YES\n");
        }

        // return 1: 是2^n
        else if (is_2n(x) == 1)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }

    return 0;
}