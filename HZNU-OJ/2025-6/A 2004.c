#include <stdio.h>

int main()
{
    int T = 0;
    scanf("%d", &T);

    // T组测试样例
    for (int i = 0; i < T; i++)
    {
        // 一共n个数据
        int n = 0;

        // 目标数据的值为k
        int k = 0;

        scanf("%d %d", &n, &k);
        int arr[n];

        // 输入n个数据
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        // 遍历数组
        for (int m = 0; m < n; m++)
        {
            if (arr[m] == k)
            {
                printf("%d\n", m + 1);
                break;
            }
        }
    }

    return 0;
}