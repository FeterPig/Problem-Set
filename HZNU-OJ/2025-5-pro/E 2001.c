#include <stdio.h>
#include <string.h>

int main()
{
    char a[200] = {'\0'};
    char b[4] = {'\0'};

    scanf("%s", a);

    for (int i = 0; i < 200; i++)
    {
        if (a[i] == '.')
        {
            b[0] = a[i + 1];
            b[1] = a[i + 2];
            b[2] = a[i + 3];
        }
    }

    if (strcmp(b, "doc") == 0)
    {
        printf("Word");
    }
    if (strcmp(b, "xls") == 0)
    {
        printf("Excel");
    }
    if (strcmp(b, "ppt") == 0)
    {
        printf("PowerPoint");
    }

    return 0;
}