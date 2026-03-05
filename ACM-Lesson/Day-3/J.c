#include <stdio.h>

int main()
{
    // [0]留空以和月份相对应
    int yusuan[13] = {0};
    for (int i = 1; i <= 12; i++)
    {
        scanf("%d", &yusuan[i]);
    }

    // [0]留空以和月份相对应
    int sheng[13] = {0};
    int cun = 0;
    for (int i = 1; i <= 12; i++)
    {
        int temp = sheng[i - 1] + 300 - yusuan[i];
        sheng[i] = temp % 100;
        cun += temp - sheng[i];
    }

    for (int i = 1; i <= 12; i++)
    {
        if (sheng[i] < 0)
        {
            printf("%d", 0 - i);
            return 0;
        }
    }

    printf("%d", (int)(sheng[12] + cun * 1.2));

    return 0;
}