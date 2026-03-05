#include <stdio.h>

int main()
{
    int c;
    scanf("%d", &c);

    float f = 9.0 / 5 * c + 32;
    printf("%.2f", f);

    return 0;
}