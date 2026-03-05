#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100000], s2[100000];
    int n = 0;

    while (scanf("%s %s %d", s1, s2, &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%c", s2[i]);
        }
        for (int i = 0; i < strlen(s1); i++)
        {
            printf("%c", s1[i]);
        }
        for (int i = n; i < strlen(s2); i++)
        {
            printf("%c", s2[i]);
        }
        printf("\n");
    }

    return 0;
}