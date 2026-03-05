#include <stdio.h>
int gcd(int x, int y);
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        printf("%d ", gcd(n, m));
    }
    return 0;
}

int min(int x, int y)
{
    if (x > y)
    {
        return y;
    }
    else
    {
        return x;
    }
}
int gcd(int x, int y)
{
    for (int i = min(x, y); i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            return i;
        }
    }
    // return 1;
}
