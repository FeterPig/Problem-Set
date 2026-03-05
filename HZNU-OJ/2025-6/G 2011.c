#include <stdio.h>

void ou(int n, double *p_ret)
{
    int x = 2;

    while (x <= n)
    {
        *p_ret += 1.0 / x;
        x += 2;
    }
}

void ji(int n, double *p_ret)
{
    int x = 1;

    while (x <= n)
    {
        *p_ret += 1.0 / x;
        x += 2;
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    double ret = 0.0;

    // 偶数
    if (n % 2 == 0)
    {
        ou(n, &ret);
    }

    // 奇数
    else if (n % 2 == 1)
    {
        ji(n, &ret);
    }

    printf("%.2f", ret);

    return 0;
}