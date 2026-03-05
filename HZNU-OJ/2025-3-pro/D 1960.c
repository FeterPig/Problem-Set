#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        // 等级
        // 6 级，11 级，16 级的时候习得她的 1 级，2 级，3 级大招
        int L = 0;
        // 有无"黑照" (0/1)
        int K = 0;
        scanf("%d%d", &L, &K);

        // 五个学长
        int xuezhang[5] = {0};
        for (int i = 0; i < 5; i++)
        {
            scanf("%d", &xuezhang[i]);
        }

        // 有几道剑气
        int dazhao[3] = {0};
        if (K == 0)
        {
            dazhao[0] = 4;
            dazhao[1] = 7;
            dazhao[2] = 10;
        }
        else if (K == 1)
        {
            dazhao[0] = 5;
            dazhao[1] = 8;
            dazhao[2] = 12;
        }

        int n_jianqi = 0;
        if (L < 6)
        {
            printf("none\n\n");
            break;
        }
        else if (L < 11)
        {
            n_jianqi = dazhao[0];
        }
        else if (L < 16)
        {
            n_jianqi = dazhao[1];
        }
        else
        {
            n_jianqi = dazhao[2];
        }

        // 击杀人数
        int kill = 0;
        // 目前正在kill的学长的下标
        int who = 0;

        for (int i = 0; i < n_jianqi; i++)
        {
            xuezhang[who] -= 300;
            if (xuezhang[who] <= 0)
            {
                kill++;
                who++;
            }
        }

        switch (kill)
        {
        case 0:
            printf("none\n\n");
            break;
        case 1:
            printf("first blood\n\n");
            break;
        case 2:
            printf("double kill\n\n");
            break;
        case 3:
            printf("triple kill\n\n");
            break;
        case 4:
            printf("ultra kill\n\n");
            break;
        case 5:
            printf("rampage\n\n");
            break;

        default:
            break;
        }
    }

    return 0;
}