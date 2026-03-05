#include <stdio.h>

int main()
{
    int T = 0;
    scanf("%d", &T);

    // T组测试样例
    for (int i = 0; i < T; i++)
    {
        // 一共n个队员
        int n = 0;

        // 目标吻合度为k
        int k = 0;

        // 计数
        int sum = 0;

        scanf("%d %d", &n, &k);

        // n行n列
        int arr[n][n];

        // 写入数组

        // 第row行
        for (int row = 0; row < n; row++)
        {
            // 第col列
            for (int col = 0; col < n; col++)
            {
                scanf("%d", &arr[row][col]);
            }
        }

        // 判断数组

        // 第row行
        for (int row = 0; row < n; row++)
        {
            // 第col列
            for (int col = 0; col < n; col++)
            {
                if (arr[row][col] > k)
                {
                    sum++;
                }
            }
        }

        printf("%d\n", (sum - n) / 2);
    }

    return 0;
}