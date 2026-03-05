#include <stdio.h>

int main()
{
    double s;
    scanf("%lf", &s);

    double step = 2.0;
    double all = 0.0;

    int i = 0;
    while (all < s)
    {
        all += step;
        step *= 0.98;
        i++;
    }
    printf("%d", i);

    return 0;
}