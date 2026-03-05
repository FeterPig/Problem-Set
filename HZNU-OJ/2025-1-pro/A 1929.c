#include <stdio.h>

int main()
{
    // 输入
    int a, b;
    scanf("%d %d", &a, &b);

    // 情况1: 实心
    if (a == 1 || a == 2)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    // 情况2: 空心
    else
    {
        for (int j = 0; j < b; j++)
        {
            printf("*");
        }
        printf("\n");
        for (int i = 0; i < a - 2; i++)
        {
            printf("*");
            for (int j = 0; j < b - 2; j++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
        for (int j = 0; j < b; j++)
        {
            printf("*");
        }
    }

    return 0;
}