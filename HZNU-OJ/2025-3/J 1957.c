#include <stdio.h>

int main()
{
    int vul = 0;
    int d = 0;

    // 一行
    while (scanf("%d %d", &vul, &d) == 2)
    {
        int time1 = 0;
        int time2 = 0;

        time1 = (vul % d == 0) ? (vul / d) : (vul / d + 1);

        int i = 1; // 第i组
        int j = 0; // 第j滴
        int k = 0; // 计数

        while (j < time1)
        {
            k = i;
            j += i;
            i++;
        }

        time2 = k - 1;

        printf("%d\n", time1 + time2);
    }

    return 0;
}