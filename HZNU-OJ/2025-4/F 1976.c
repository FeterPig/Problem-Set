#include <stdio.h>

long long int func(long long int day_1, long long int day_2, long long int n)
{
    if (n == 1)
    {
        return day_1;
    }
    else if (n == 2)
    {
        return day_2;
    }
    else
    {
        return func(day_1, day_2, (n - 1)) + 2 * func(day_1, day_2, (n - 2));
    }
}

int main()
{
    int T = 0;

    long long int day_1 = 1;
    long long int day_2 = 0;

    scanf("%d", &T);

    while (T--)
    {
        scanf("%lld", &day_2);
        printf("%lld\n", func(day_1, day_2, 30));
    }

    return 0;
}