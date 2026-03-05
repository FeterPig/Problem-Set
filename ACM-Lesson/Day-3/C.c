#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double a = 1.0;
    double b = 1.0;

    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        a *= 0.5 + sqrt(5) / 2;
        b *= 0.5 - sqrt(5) / 2;
    }

    printf("%.2f\n", (a - b) / sqrt(5));

    return 0;
}