#include <stdio.h>

// 判断生肖
void func(int year, char **sx)
{
    // 所有生肖
    char *all_sx[] = {"鼠", "牛", "虎", "兔", "龙", "蛇", "马", "羊", "猴", "鸡", "狗", "猪"};

    // 1984 鼠年

    // 公元xxxx年
    int sx_i;
    if (year > 0)
    {
        sx_i = year - 1984;
    }
    else
    {
        // 公元前换算成公元
        sx_i = year - 1983; // 去掉0年
    }

    int i = sx_i % 12;
    if (i < 0)
    {
        i += 12;
    }

    *sx = all_sx[i];
}

int main()
{
    int year;

    while (scanf("%d", &year) != EOF)
    {
        // 生肖
        char *sx;

        func(year, &sx);
        printf("%s\n", sx);
    }

    return 0;
}