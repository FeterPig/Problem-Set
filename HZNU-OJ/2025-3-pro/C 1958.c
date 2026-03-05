#include <stdio.h>

int main()
{
    int T = 0;
    scanf("%d", &T);
    while (T--)
    {
        /**
         * 1 2 3 4 5 (6) (7) 1 2 3 4 5 (6) (7) 1 2 3 4 5
         *
         * 2017 -> 9 -> 周一
         *
         * 2015.5.1是周五
         * 2016.5.1是周天
         * 2017.5.1是周一
         * 
         * 1928.5.1是周二
         */

        int year = 0;
        scanf("%d", &year);

        // 计算xxxx年五月一号是 星期几
        int count = 0; // 记录相隔天数

        for (int i = 1929; i <= year; i++)
        {
            if (((i % 4 == 0) && (i % 100 != 0)) || i % 400 == 0)
            {
                count += 366;
            }
            else
            {
                count += 365;
            }
        }

        int zhou = 2 + count % 7;
        if (zhou > 7)
        {
            zhou -= 7;
        }

        switch (zhou)
        {
        case 1:
            printf("9\n");
            break;
        case 2:
            printf("6\n");
            break;
        case 3:
            printf("5\n");
            break;
        case 4:
            printf("5\n");
            break;
        case 5:
            printf("5\n");
            break;
        case 6:
            printf("5\n");
            break;
        case 7:
            printf("6\n");
            break;
        default:
            break;
        }
    }

    return 0;
}