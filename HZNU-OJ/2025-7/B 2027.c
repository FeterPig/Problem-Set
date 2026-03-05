#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    scanf("%d%d", &x, &y);
    getchar();

    struct Xinxi
    {
        long long int zkzh; // 准考证号
        char name[20];      // 名字
        int score;          // 分数
    } arr[x];

    // 录入信息
    for (int i = 0; i < x; i++)
    {
        scanf("%lld", &arr[i].zkzh);
        scanf("%s", arr[i].name);
        scanf("%d", &arr[i].score);
    }

    // y次查询
    for (int i = 0; i < y; i++)
    {
        long long int cx_zkzh = 0;
        int cx_score = 0;
        scanf("%lld", &cx_zkzh);

        for (int j = 0; j < x; j++)
        {
            if (arr[j].zkzh == cx_zkzh)
            {
                cx_score = arr[j].score;
                break;
            }
        }
        
        if (cx_score >= 90 && cx_score <= 100)
        {
            printf("A\n");
        }
        else if (cx_score >= 80 && cx_score < 90)
        {
            printf("B\n");
        }
        else if (cx_score >= 70 && cx_score < 80)
        {
            printf("C\n");
        }
        else if (cx_score >= 60 && cx_score < 70)
        {
            printf("OK\n");
        }
        else if (cx_score < 60)
        {
            printf("ARE YOU PIG? \n");
        }
    }

    return 0;
}