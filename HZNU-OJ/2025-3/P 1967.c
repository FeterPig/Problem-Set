#include <stdio.h>

int main()
{
    // 第 i+1 行
    for (int i = 0; i < 9; i++)
    {
        // 第 j+1 列
        for (int j = 0; j <= i; j++)
        {
            if (j + 1 != i + 1)
            {
                printf("%d*%d=%d ", i + 1, j + 1, (i + 1) * (j + 1));
            }
            else
            {
                printf("%d*%d=%d", i + 1, j + 1, (i + 1) * (j + 1));
            }
        }
        printf("\n");
    }

    return 0;
}