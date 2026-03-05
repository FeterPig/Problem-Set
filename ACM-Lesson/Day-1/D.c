#include <stdio.h>

int main()
{
    float t = 0.0;
    int n = 0;
    scanf("%f%d", &t, &n);
    float c = t / n;
    int d = 2 * n;
    printf("%.3f\n%d", c, d);
    return 0;
}