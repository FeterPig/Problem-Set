#include <stdio.h>

int isLeap(int x);

int main()
{
    int t;
    scanf("%d", &t);
    // 循环t次
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d ", isLeap(n));
    }
}

int isLeap(int x)
{
    // 闰年
    if ((x % 4 == 0) && (x % 100 != 0) || x % 400 == 0)
    {
        return 29;
    }
    // 不是闰年
    else
    {
        return 28;
    }
}