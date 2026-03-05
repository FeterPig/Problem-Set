// 东西最浅，南北最深

#include <stdio.h>

int main()
{
    int n; // 行
    int m; // 列

    // 二维数组存储坐标
    scanf("%d %d", &n, &m);
    int *arr1[n]; // 存放东西最浅的数组的地址的数组
    int *arr2[m]; // 存放南北最深的数组的地址的数组
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // 东西最浅
    for (int i = 0; i < n; i++)
    {
        arr1[i] = &arr[i][0];
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] < *arr1[i])
            {
                arr1[i] = &arr[i][j];
            }
        }
    }

    // 南北最深
    for (int j = 0; j < m; j++)
    {
        arr2[j] = &arr[0][j];
        for (int i = 0; i < n; i++)
        {
            if (arr[i][j] > *arr2[j])
            {
                arr2[j] = &arr[i][j];
            }
        }
    }

    // 查找重合项
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (*arr1[i] == *arr2[j])
            {
                printf("(%d,%d)", i + 1, j + 1);
            }
        }
    }

    return 0;
}