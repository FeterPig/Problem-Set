#include <stdio.h>
int main()
{
    // 输入
    int n = 0;
    scanf("%d", &n);

    // 4或7的个数
    int x = 0;

    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            x = x + 1;
            n = n / 10;
        }
        else
        {
            printf("NO");
            return 0;
        }
    }

    while (x != 0)
    {
        if (x % 10 == 4 || x % 10 == 7)
            x = x / 10;
        else
        {
            printf("NO");
            return 0;
        }
    }

    if (x == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}