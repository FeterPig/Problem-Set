#include <stdio.h>
#include <math.h>

double happy(double x, double y, double z, double a, double b, double c, double d);

int main()
{

    double x, y, z, a, b, c, d;
    while (scanf("%lf%lf%lf%lf%lf%lf%lf", &x, &y, &z, &a, &b, &c, &d) != EOF)
    {
        printf("%.2lf ", happy(x, y, z, a, b, c, d));
    }
    return 0;
}

double happy(double x, double y, double z, double a, double b, double c, double d)
{
    double temp1 = fabs(a * x + b * y + c * z + d);
    double temp2 = sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2));
    double dd = temp1 / temp2;
    return dd;
}