#include <stdio.h>

int f(int n);
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n ", f(n));
    }
    return 0;
}

int f(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    else
    {
        return f(n - 1) + f(n - 2);
    }
}