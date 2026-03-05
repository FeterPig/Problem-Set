#include <stdio.h>
int main()
{
    int n = 0;
    int t = 0;
    while (scanf("%d%d", &n, &t) != EOF)
    {
        int xuehao[n + t];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &xuehao[i]);
        }

        int id[t][2]; // id[t][新队员的id/现有队员的id]
        for (int i = 0; i < t; i++)
        {
            scanf("%d%d", &id[i][0], &id[i][1]);
        }

        int count = n;

        for (int i = 0; i < t; i++)
        {
            // for (int j = 0; j < n + t; j++)
            for (int j = 0; j < count; j++)
            {
                if (xuehao[j] == id[i][1])
                {
                    // 从他开始全部后移一位
                    // for (int k = n + t - 2; k >= j; k--)
                    for (int k = count - 1; k >= j; k--)
                    {
                        xuehao[k + 1] = xuehao[k];
                    }
                    xuehao[j] = id[i][0];
                    count++;
                    break;
                }
            }
        }

        for (int i = 0; i < n + t; i++)
        {
            printf("%d ", xuehao[i]);
        }
    }

    return 0;
}