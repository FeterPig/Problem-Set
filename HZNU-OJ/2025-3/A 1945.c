#include <stdio.h>

int main()
{
    int n = 1;

    while (scanf("%d", &n))
    {
        const int init = 100;
        float h = (float)init;

        if (n == 0)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            h = h * 0.7;
        }
        printf("%.2f\n", h);
    }

    return 0;
}