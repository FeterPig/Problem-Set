#include <stdio.h>

int com(int x, int y);

int main()
{
    int a, b, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", com(a, b));
    }
    return 0;
}

// com(x, y) = com(x - 1, y - 1) + com(x - 1, y)
int com(int x, int y)
{
    if (y > (x - y))
    {
        y = x - y;
    }

    if (y == 0)
    {
        return 1;
    }
    else if (y == 1)
    {
        return x;
    }
    else
    {
        return com(x - 1, y - 1) + com(x - 1, y);
    }
}