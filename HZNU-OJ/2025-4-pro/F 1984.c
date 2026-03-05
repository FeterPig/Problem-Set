#include <stdio.h>

#include <math.h>

int happy(int year, int month, int day);

int main()
{

    char ch;

    int year, month, day;

    while (scanf("%d%c%d%c%d", &year, &ch, &month, &ch, &day) != EOF)
    {

        printf("%d ", happy(year, month, day));
    }

    return 0;
}

int happy(int year, int month, int day)
{
    // 检查月份
    if (month < 1 || month > 12)
    {
        return -1;
    }

    // 是否闰年
    int runnian = 0;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        runnian = 1;
    }

    // 当月最大天数
    int max_day;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        max_day = 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        max_day = 30;
    }
    else
    { // 2月
        if (runnian == 1)
        {
            max_day = 29;
        }
        else if (runnian == 0)
        {
            max_day = 28;
        }
    }

    // 检查日期
    if (day < 1 || day > max_day)
    {
        return -2;
    }
    else
    {
        return 1;
    }
}