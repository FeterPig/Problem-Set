#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    struct Stu
    {
        int bisaixuhao;
        int tihao[9]; // 0-9, 0置空
    } arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].bisaixuhao);
        for (int j = 1; j <= 8; j++)
        {
            scanf("%d", &arr[i].tihao[j]);
        }
    }

    for (int j = 1; j <= 8; j++)
    {
        int temp[n][2];
        for (int i = 0; i < n; i++)
        {
            // 试卷编号对应的arr下标
            temp[i][0] = i;
            // 答对人数
            temp[i][1] = arr[i].tihao[j];
        }

        // 冒泡排序
        for (int p = 0; p < n - 1; p++)
        {
            for (int q = 0; q < n - 1 - p; q++)
            {
                if (temp[q][1] < temp[q + 1][1])
                {
                    int temp0 = temp[q + 1][0];
                    temp[q + 1][0] = temp[q][0];
                    temp[q][0] = temp0;

                    int temp1 = temp[q + 1][1];
                    temp[q + 1][1] = temp[q][1];
                    temp[q][1] = temp1;
                }
            }
        }

        int max = temp[0][1];
        int max_n = 0;
        for (int i = 0; i < n; i++)
        {
            if (temp[i][1] == max)
            {
                max_n++;
            }
        }
        if (max_n == 1)
        {
            printf("%d", arr[temp[0][0]].bisaixuhao);
            return 0;
        }
        else
        {
            for (int i = max_n; i < n; i++)
            {
                for (int k = 1; k < 9; k++)
                {
                    (arr[temp[i][0]].tihao)[k] = 0;
                }
            }
        }
    }

    return 0;
}