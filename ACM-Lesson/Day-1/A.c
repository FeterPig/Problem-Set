#include <stdio.h>
#include <math.h>

int main()
{
    float a = 0.0, b = 0.0, c = 0.0;
    scanf("%f %f %f", &a, &b, &c);
    float p = (a + b + c) / 2;
    float sum = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1f", sum);
    return 0;
}