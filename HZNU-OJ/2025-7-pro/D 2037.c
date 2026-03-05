#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    struct Data
    {
        int order;
        int score;
        int rank;
    } arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i].order = i;
        scanf("%d", &arr[i].score);
    }

    // 下标->排名, 内容->结构体数组下标
    int arr_n[n];
    for (int i = 0; i < n; i++)
    {
        arr_n[i] = i;
    }

    // 分数从高到低排序
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[arr_n[j]].score < arr[arr_n[j + 1]].score)
            {
                int temp = arr_n[j + 1];
                arr_n[j + 1] = arr_n[j];
                arr_n[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[arr_n[i]].rank = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i].order == i)
        {
            printf("%d ", arr[i].rank);
        }
    }

    return 0;
}