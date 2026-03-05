#include <stdio.h>

int main()
{
    // 饮料价格
    const int KQS = 150;
    const int KL = 200;
    const int CZ = 350;

    // T行测试数据
    int T = 0;
    scanf("%d", &T);
    int arr[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 每种饮料最多买多少瓶
    int KQS_max = 0;
    int KL_max = 0;
    int CZ_max = 0;

    // T行数据中的第i+1个
    for (int i = 0; i < T; i++)
    {
        int min_all;

        // 计算__max
        KQS_max = arr[i] / 150;
        KL_max = arr[i] / 200;
        CZ_max = arr[i] / 350;

        // 计算最少浪费钱数

        int arr2[(KQS_max + 1) * (KL_max + 1) * (CZ_max + 1)];
        int n = 0;

        // cz
        for (int cz = CZ_max; cz >= 0; cz--)
        {
            // kl
            for (int kl = KL_max; kl >= 0; kl--)
            {
                // kqs
                for (int kqs = KQS_max; kqs >= 0; kqs--)
                {
                    if (((cz * 350 + kl * 200 + kqs * 150) > arr[i]) || (cz == 0 && kl == 0 && kqs == 0))
                    {
                        continue;
                    }
                    else
                    {
                        arr2[n] = arr[i] - (cz * 350 + kl * 200 + kqs * 150);
                        n += 1;
                    }
                }
            }
        }

        min_all = arr2[0];
        for (int q = 0; q < n; q++)
        {
            if (arr2[q] < min_all)
            {
                min_all = arr2[q];
            }
        }

        printf("%d\n", min_all);
    }

    return 0;
}
