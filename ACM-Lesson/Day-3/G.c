#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%02d", num);
            num++;
        }
        printf("\n");
    }
    printf("\n");

    num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * (n - (i + 1)); j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("%02d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}