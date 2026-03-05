#include <stdio.h>
#include <math.h>

double happy(double a);
double a;

int main()
{
    while (scanf("%lf", &a) != EOF)
    {
        printf("%.6lf ", happy(a));
    }
    return 0;
}

double happy(double a)
{
    if (a == 0.0)
    {
        return 0.0;
    }

    double x1 = a;
    double x2 = (x1 + a / x1) / 2;

    // fabs: 浮点数的abs
    while (fabs(x2 - x1) > 1e-6)
    {
        x1 = x2;
        x2 = (x1 + a / x1) / 2;
    }
    return x2;
}