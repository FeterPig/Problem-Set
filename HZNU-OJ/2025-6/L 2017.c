#include <stdio.h>

int main()
{
    int matrix[4][4] = {0};
    int n = 0;
    scanf("%d", &n);

    // 存储粽子的坐标
    int arr[n][2];

    for (int i = 0; i < n; i++)
    {
        int x = 0;
        int y = 0;
        char z = ' ';
        scanf("%d %d %c", &x, &y, &z);

        matrix[x][y] = z;
        arr[i][0] = x;
        arr[i][1] = y;
    }

    // 当前粽子下标
    int num = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[num][0] == i && arr[num][1] == j)
            {
                printf("%c ", matrix[i][j]);
                num++;
            }
            else
            {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}