#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    // 每一行
    for (int i = 0; i < T; i++)
    {
        int a, b, c; // 300,100,50分的个数
        scanf("%d %d %d", &a, &b, &c);
        int max = 0;
        int min = 0;
        max = a;
        if (b > max)
        {
            max = b;
        }
        if (c > max)
        {
            max = c;
        }
        min = a;
        if (b < min)
        {
            min = b;
        }
        if (c < min)
        {
            min = c;
        }

        int score_min = 0;
        int score_max = 0;

        // 最小分数:先300,后50
        for (int j = 0; j < (a + b + c);)
        {
            for (int z = 0; z < a; z++)
            {
                score_min += (j * 2 + 1) * 300;
                j++;
            }
            for (int z = 0; z < b; z++)
            {
                score_min += (j * 2 + 1) * 100;
                j++;
            }
            for (int z = 0; z < c; z++)
            {
                score_min += (j * 2 + 1) * 50;
                j++;
            }
        }

        //  最大分数:先50后300
        for (int j = 0; j < (a + b + c);)
        {
            for (int z = 0; z < c; z++)
            {
                score_max += (j * 2 + 1) * 50;
                j++;
            }
            for (int z = 0; z < b; z++)
            {
                score_max += (j * 2 + 1) * 100;
                j++;
            }
            for (int z = 0; z < a; z++)
            {
                score_max += (j * 2 + 1) * 300;
                j++;
            }
        }
        printf("%d %d\n", score_min, score_max);
    }

    return 0;
}