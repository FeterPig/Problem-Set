#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%.2f\n", (float)x + y);
    printf("%.2f\n", (float)x - y);
    printf("%.2f\n", ((float)x + y) / 2.0);

    return 0;
}