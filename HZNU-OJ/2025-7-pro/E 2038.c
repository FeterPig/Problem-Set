#include <stdio.h>

// 递归TLE, 不可行
// int c(int n, int k)
// {
//     if (k == 0 || k == n)
//     {
//         return 1;
//     }
//     else
//     {
//         return c(n - 1, k - 1) + c(n - 1, k);
//     }
// }

// 改用动态规划
// 杨辉三角!!
// int c(int n, int k)
// {
//     if (k == 0 || k == n)
//     {
//         return 1;
//     }

//     int dp[n + 1][n + 1];
//     for (int i = 0; i <= n; i++)
//     {
//         dp[i][0] = 1;
//         dp[i][i] = 1;
//     }

//     for (int i = 2; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if (i == j)
//             {
//                 continue;
//             }
//             else
//             {
//                 dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
//             }
//         }
//     }

//     return dp[n][k] % 2;
// }

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int k, n;
        scanf("%d%d", &k, &n);

        // ...原来这道题是考察位运算啊
        // 在二进制表示中，k 的每一位（即所有为 1 的位）
        // 都必须小于或等于 n 的对应位（即 n 的对应位也为 1）。
        // 用位运算表示就是：(k & n) == k)
        // 若满足该条件，说明 k 的二进制是 n 的二进制的 “子集”（所有 1 位都被 n 的 1 位覆盖），
        // 此时 \(C(n, k)\) 是奇数（模 2 为 1）；否则，\(C(n, k)\) 是偶数（模 2 为 0）。

        if ((k & n) == k)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}