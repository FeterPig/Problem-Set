#include <stdio.h>
#include <string.h>

int main()
{
    char str[110];
    scanf("%s", str);

    if (strlen(str) > 10)
    {
        printf("BAD");
    }
    else
    {
        printf("GOOD");
    }

    return 0;
}