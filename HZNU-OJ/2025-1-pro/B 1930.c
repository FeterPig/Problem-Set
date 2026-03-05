#include <stdio.h>

int main()
{
    char arr[5];

    for (int i = 0; i < 5; i++)
    {
        // 直接用"%c"会导致将空格也写入到数组中
        // 使用"" %c"可以跳过空格, 避免这个问题
        scanf(" %c", &arr[i]);
    }

    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 'A')
        {
            count += 1;
        }
        if (arr[i] == 'B')
        {
            count += 2;
        }
        if (arr[i] == 'C')
        {
            count += 3;
        }
        if (arr[i] == 'D')
        {
            count += 4;
        }
    }
    printf("%d", count);

    return 0;
}