#include <stdio.h>
#include <string.h>

int main()
{
    char s1[25], s2[25];

    while (scanf("%s %s", s1, s2) != EOF)
    {
        int len_max = strlen(s1) > strlen(s2) ? 2 * strlen(s2) : 2 * strlen(s1);
        // if (strlen(s1) > strlen(s2))
        // {
        //     len_max = strlen(s2);
        // }
        // else
        // {
        //     len_max = strlen(s1);
        // }

        int i = 0;
        int j = 0;
        while (len_max > 0)
        {
            if (i == 0 && j == 0)
            {
                printf("%c", s1[i]);
                i++;
                len_max--;
            }
            if (i == 1 && j == 0)
            {
                printf("%c", s2[j] + 32);
                j++;
                len_max--;
            }
            if (i == j)
            {
                printf("%c", s1[i]);
                i++;
                len_max--;
            }
            else
            {
                printf("%c", s2[j]);
                j++;
                len_max--;
            }
        }
        printf("\n");
    }
    return 0;
}