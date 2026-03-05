#include <stdio.h>

int fun(int x, int y)
{
    int ret = x;
    if (y > x)
    {
        ret = y;
    }
    return ret;
}
int main()
{
    int a = 0, b = 0;
    while (scanf("%d", &a) != EOF)
    {
        scanf("%d", &b);

        int (*pfun)(int, int) = fun;

        printf("%d\n", pfun(a, b));
    }

    return 0;
}