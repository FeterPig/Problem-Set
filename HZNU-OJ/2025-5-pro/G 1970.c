#include <stdio.h>
int isPrime(int x);
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (isPrime(n))
        {
            printf("YES ");
        }
        else
        {
            printf("NO ");
        }
    }
    return 0;
}

// 除了1和她本身, 没有别的因数
int isPrime(int x)
{
    if (x == 1)
    {
        return 0;
    }
    if (x == 2)
    {
        return 1;
    }

    // 跳过初二以外的偶数
    if (x % 2 == 0)
    {
        return 0;
    }

    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}