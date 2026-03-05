#include <stdio.h>

int max(int x, int y)
{
    return x > y ? x : y;
}

int main()
{
    int N, T;
    while (scanf("%d%d", &N, &T) != EOF)
    {
        if (N == 0 && T == 0)
        {
            return 0;
        }

        struct Jieju
        {
            int yuyuedu;
            int time;
        } jieju[10000];
        int total_n_jieju = 0;

        for (int n_game = 0; n_game < N; n_game++)
        {
            int n_jieju;
            scanf("%d", &n_jieju);

            int yuyuedu_temp[1000];
            for (int i = 0; i < n_jieju; i++)
            {
                scanf("%d", &yuyuedu_temp[i]);
            }

            for (int i = 0; i < n_jieju; i++)
            {
                int time_temp;
                scanf("%d", &time_temp);
                jieju[total_n_jieju].yuyuedu = yuyuedu_temp[i];
                jieju[total_n_jieju].time = time_temp;
                total_n_jieju++;
            }
        }

        // 01背包, 创建dp表
        int dp[total_n_jieju + 1][T + 1];
        for (int j = 0; j <= T; j++)
        {
            dp[0][j] = 0;
        }

        for (int i = 1; i <= total_n_jieju; i++)
        {
            for (int j = 0; j <= T; j++)
            {
                if (j >= jieju[i - 1].time)
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - jieju[i - 1].time] + jieju[i - 1].yuyuedu);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        printf("%d\n", dp[total_n_jieju][T]);
    }

    return 0;
}