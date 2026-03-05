#include <stdio.h>

int main()
{
    char c;
    int n;
    int num = 1;
    while (scanf(" %c %d", &c, &n) == 2)
    {
        if (c == '@')
        {
            break;
        }

        // int i = 1; // 第i行

        for (int i = 1; i <= n; i++)
        {
            if (num != 1)
            {
                if (i == 1)
                {
                    printf("\n");
                }
            }
            num++;

            for (int j = i; j < n; j++)
            {
                putchar(' ');
            }
            // i++;

            putchar(c);

            if (i == 1)
            {
                printf("\n");
                // i++;
            }
            else if (i == n)
            {
                for (int j = 0; j < 2 * n - 2; j++)
                {
                    putchar(c);
                }
                printf("\n");
            }
            else
            {
                for (int j = 0; j < 2 * i - 3; j++)
                {
                    putchar(' ');
                }
                putchar(c);
                printf("\n");
                // i++;
            }
        }
    }

    return 0;
}