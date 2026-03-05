#include <stdio.h>

int main()
{
    int a = 0;
    double sum = 0;
    scanf("%d", &a);

    if (a <= 150)
    {
        sum = 0.4463 * a;
    }
    else if (a <= 400)
    {
        sum = 150 * 0.4463 + (a - 150) * 0.4663;
    }
    else
    {
        sum = 150 * 0.4463 + 250 * 0.4663 + (a - 400) * 0.5663;
    }

    printf("%.1f", sum);
    return 0;
}