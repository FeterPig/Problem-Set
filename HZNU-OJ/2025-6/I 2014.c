#include <stdio.h>

int main()
{
    int matrix[4][4] = {0};

    // 目标下标(x,y)
    int x = 0, y = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // 第i行,第j列
            scanf("%d", &matrix[i][j]);
        }
    }

    // int min = matrix[0][0];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            /* ru guo bi ta xiao */
            if (matrix[i][j] < matrix[x][y])
            {
                x = i;
                y = j;
            }
        }
    }

    printf("%d %d", x, y);

    return 0;
}