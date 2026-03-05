#include <stdio.h>
#include <string.h>

int main()
{
    char num[100];
    while (scanf("%s", num) == 1)
    {
        int sum = 0;
        int len = strlen(num);

        for (int i = 0; i < len; i++)
        {
            sum += num[i] - '0';
        }
        if (sum < 10)
        {
            printf("%d\n", sum);
        }
        else
        {
            if ((sum % 10 + sum / 10 % 10) < 10)
            {
                printf("%d\n", sum % 10 + sum / 10 % 10);
            }
            else
            {
                printf("%d\n", (sum % 10 + sum / 10 % 10) % 10 + (sum % 10 + sum / 10 % 10) / 10 % 10);
            }
        }
    }

    return 0;
}

// tmd原来是忘加换行了,cao!!