#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    struct Men
    {
        // 门离你们队伍的距离
        int d;
        // 门闭合所需的时间
        int time;
    } arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].d, &arr[i].time);
        getchar();
    }

    int v_max = 0;
    int v_min = 0;
    scanf("%d", &v_min);
    scanf("%d", &v_max);

    // 判断是否能通过此门&&记录所需时间
    double arr_j[n];

    // 遍历n个门
    for (int i = 0; i < n; i++)
    {
        // 计算最快和最慢到达时间
        double t_max = (double)arr[i].d / v_max;
        double t_min = (double)arr[i].d / v_min;

        double delta_time = t_min - t_max; // 时间差

        if (delta_time <= arr[i].time)
        {
            arr_j[i] = t_min;
        }
        else
        {
            arr_j[i] = -1;
        }
    }

    int judge = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr_j[i] > -1)
        {
            judge = 1;
            break;
        }
    }

    if (judge == 0)
    {
        printf("let_s_die_together");
    }
    else
    {
        int d_min = -1;
        double res_time = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr_j[i] != -1)
            {
                if (d_min == -1 || arr[i].d < d_min)
                {
                    d_min = arr[i].d;
                    res_time = arr_j[i];
                }
            }
        }
        printf("%.2f", res_time);
    }

    return 0;
}