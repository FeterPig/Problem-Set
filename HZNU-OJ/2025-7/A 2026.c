#include <stdio.h>

int main()
{
    int T = 0;
    scanf("%d", &T);

    while (T--)
    {
        int n = 0;
        scanf("%d", &n);

        struct Waihao
        {
            char chenghao[30];
            int cishu;
        } arr[n];

        // 储存arr的下标
        int sort[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%s", arr[i].chenghao);
            scanf("%d", &arr[i].cishu);
            sort[i] = i;
        }

        // 将arr的下标按照出现次数从多到少冒泡排序
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[sort[j]].cishu < arr[sort[j + 1]].cishu)
                {
                    int temp = 0;
                    temp = sort[j];
                    sort[j] = sort[j + 1];
                    sort[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            printf("%s\n", arr[sort[i]].chenghao);
        }
    }

    return 0;
}