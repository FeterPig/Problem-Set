#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    getchar();

    struct Shuju
    {
        char shu[5];
        int bq1;
        int bq2;
    } arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%s%d%d", arr[i].shu, &arr[i].bq1, &arr[i].bq2);
        getchar();
    }

    // 按第一个标签给下标排序 [标签1/在原数组中的下标] ,从小到大
    int arr_s1[n][2];
    for (int i = 0; i < n; i++)
    {
        arr_s1[i][0] = arr[i].bq1;
        arr_s1[i][1] = i;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr_s1[j][0] > arr_s1[j + 1][0])
            {
                int temp0 = 0;
                int temp1 = 0;

                temp0 = arr_s1[j][0];
                temp1 = arr_s1[j][1];

                arr_s1[j][0] = arr_s1[j + 1][0];
                arr_s1[j][1] = arr_s1[j + 1][1];

                arr_s1[j + 1][0] = temp0;
                arr_s1[j + 1][1] = temp1;
            }
        }
    }

    // 按第二个标签给下标排序 [标签2/在原数组中的下标] ,从大到小
    int arr_s2[n][2];
    for (int i = 0; i < n; i++)
    {
        arr_s2[i][0] = arr[i].bq2;
        arr_s2[i][1] = i;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr_s2[j][0] < arr_s2[j + 1][0])
            {
                int temp0 = 0;
                int temp1 = 0;

                temp0 = arr_s2[j][0];
                temp1 = arr_s2[j][1];

                arr_s2[j][0] = arr_s2[j + 1][0];
                arr_s2[j][1] = arr_s2[j + 1][1];

                arr_s2[j + 1][0] = temp0;
                arr_s2[j + 1][1] = temp1;
            }
        }
    }

    printf("%s %s", arr[arr_s1[9][1]].shu, arr[arr_s2[9][1]].shu);

    return 0;
}