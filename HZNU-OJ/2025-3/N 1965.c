#include <stdio.h>

int main()
{
    int sum = 0;
    int a = 0;
    for (int i = 0; i < 50; i++)
    {
        a += 2;
        sum += a;
    }
    printf("%d", sum);
    return 0;
}