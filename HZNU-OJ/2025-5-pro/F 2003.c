#include <stdio.h>

int main()
{
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);

    int matrix_1[n][m];
    int matrix_2[m][k];

    int matrix_sum[n][k];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            matrix_sum[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix_1[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            scanf("%d", &matrix_2[i][j]);
        }
    }

    // 计算
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            for (int z = 0; z < m; z++)
            {
                matrix_sum[i][j] += matrix_1[i][z] * matrix_2[z][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (j != k - 1)
            {
                printf("%d ", matrix_sum[i][j]);
            }
            else
            {
                printf("%d\n", matrix_sum[i][j]);
            }
        }
    }
    return 0;
}