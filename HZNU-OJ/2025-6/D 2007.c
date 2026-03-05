#include <stdio.h>

int main()
{
    int T = 0;
    scanf("%d", &T);

    // T组测试样例
    for (int i = 0; i < T; i++)
    {
        // 一共带了n元
        int n = 0;
        // 想买k种金鱼
        int k = 0;
        // 总共有m种金鱼
        int m = 0;
        // 需要花的钱
        int sum = 0;

        // 需要借的钱
        int sub = 0;

        scanf("%d %d %d", &n, &k, &m);

        // m组数据
        int arr[m];

        // 写入arr
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[j]);
        }

        // 冒泡排序
        for (int j = 0; j < m - 1; j++)
        {
            for (int k = 0; k < m - 1; k++)
            {
                int temp = 0;
                if (arr[k] > arr[k + 1])
                {
                    temp = arr[k];
                    arr[k] = arr[k + 1];
                    arr[k + 1] = temp;
                }
            }
        }

        for (int j = 0; j < k; j++)
        {
            sum += arr[j];
        }
        sub = sum - n;
        if (sub < 0)
        {
            sub = 0;
        }

        printf("%d\n", sub);
    }
    return 0;
}