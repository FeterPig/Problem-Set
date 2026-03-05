#include <stdio.h>

int stremp(char *p1, char *p2)
{
    while (*p1 == *p2 && *p1 != '\0')
    {
        p1++;
        p2++;
    }

    return *p1 - *p2;
}

int main()
{
    char s1[100] = {'\0'};
    char s2[100] = {'\0'};

    while (scanf("%s%s", s1, s2) != EOF)
    {
        printf("%d\n", stremp(s1, s2));
    }

    return 0;
}