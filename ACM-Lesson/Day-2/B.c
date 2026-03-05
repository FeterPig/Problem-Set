#include <stdio.h>

int main()
{
    int x, n;
    scanf("%d%d", &x, &n);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (x != 6 && x != 7)
        {
            sum += 250;
        }
        x++;
        if (x > 7)
        {
            x = 1;
        }
    }

    printf("%d", sum);

    return 0;
}