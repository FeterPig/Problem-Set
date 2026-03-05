#include <stdio.h>

int func(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int a = 0;
    int b = 0;

    a = func(n);
    b = n / a;

    if (a > b)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d", b);
    }

    return 0;
}