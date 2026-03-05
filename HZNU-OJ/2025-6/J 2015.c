#include <stdio.h>

int main()
{
    int matrix[5][5] = {0};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 50 + matrix[0][0] + matrix[0][4] + matrix[1][1] + matrix[1][3] + matrix[2][2] + matrix[3][3] + matrix[3][1] + matrix[4][4] + matrix[4][0];
    printf("%d\n", sum);

    if (sum > 100)
    {
        printf("wo de tian!");
    }
    else
    {
        printf("make monkey!");
    }

    return 0;
}