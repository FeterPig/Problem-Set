#include <stdio.h>

int main()
{
    int a, b, c; // 年月日
    scanf("%d %d %d", &a, &b, &c);
    int month_max[13];
    month_max[0] = 0; // 置空
    month_max[1] = 31;
    month_max[2] = a % 4 == 0 ? 29 : 28; // 平年二月28,润年二月29
    month_max[3] = 31;
    month_max[4] = 30;
    month_max[5] = 31;
    month_max[6] = 30;
    month_max[7] = 31;
    month_max[8] = 31;
    month_max[9] = 30;
    month_max[10] = 31;
    month_max[11] = 30;
    month_max[12] = 31;

    if (c == month_max[b])
    {
        c = 1;
        b++;
    }
    else
    {
        c++;
    }

    if (b > 12)
    {
        b -= 12;
        a++;
    }

    printf("%d %d %d", a, b, c);

    return 0;
}
