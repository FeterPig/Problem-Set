#include <stdio.h>

int main()
{
    int arr[3];

    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

    // 数组元素个数
    int sz = sizeof(arr) / sizeof(arr[0]);


    for (int i = 0; i < sz - 1; i++)
    {
        // 单趟冒泡排序
        for (int j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int k = 0; k < sz; k++)
    {
        printf("%d ", arr[k]);
    }

    return 0;
}