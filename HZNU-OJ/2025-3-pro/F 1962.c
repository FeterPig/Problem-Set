// #include <stdio.h>

// int main()
// {
//     /**
//      * 第一次: 开头不换行, 末尾不换行
//      * 默认: 开头换两行, 末尾不换行
//      */
//     int n = 0;
//     int is_first = 1;

//     while (scanf("%d", &n) != EOF)
//     {
//         if (is_first == 0)
//         {
//             printf("\n\n");
//         }
//         if (is_first == 1)
//         {
//             is_first = 0;
//         }

//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= n - i; j++)
//             {
//                 printf(" ");
//             }
//             for (int j = 1; j <= i; j++)
//             {
//                 printf("%d", j);
//             }
//             for (int j = i - 1; j > 0; j--)
//             {
//                 printf("%d", j);
//             }
//             printf("\n");
//         }
//         for (int i = n - 1; i >= 1; i--)
//         {
//             for (int j = 1; j <= n - i; j++)
//             {
//                 printf(" ");
//             }
//             for (int j = 1; j <= i; j++)
//             {
//                 printf("%d", j);
//             }
//             for (int j = i - 1; j > 0; j--)
//             {
//                 printf("%d", j);
//             }
//             if (i != 1)
//             {
//                 printf("\n");
//             }
//         }
//     }
// }

/**
 * 自己写一直PE, 没招了, 借鉴一下Solution吧
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 1; i <= 2 * n - 1; i++)
        {
            for (int j = 0; j <= 2 * n - 1; j++)
            {
                temp = n - abs(n - i) - abs(n - j);
                if (temp <= 0)
                {
                    printf(" ");
                }
                if (temp > 0)
                {
                    printf("%d", temp);
                }
                if (temp == 1 && j >= n)
                {
                    printf("\n");
                    break;
                }
            }
        }
    }

    return 0;
}