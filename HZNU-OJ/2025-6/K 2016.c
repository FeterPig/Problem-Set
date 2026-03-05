#include <stdio.h>
#include <string.h>

int main()
{
    char str[10000];
    char str_n[10000];
    int n = 0;

    scanf("%s %d", str, &n);
    int len = strlen(str);

    for (int i = n, j = 0; i <= len; i++, j++)
    {
        str_n[j] = str[i];
    }

    printf("%s", str_n);

    return 0;
}