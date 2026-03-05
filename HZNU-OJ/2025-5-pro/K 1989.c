#include <stdio.h>
#include <string.h>

int main()
{
    char str[10000] = {'\0'};
    while (fgets(str, 10000, stdin) != NULL)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == ' ')
            {
                str[i] = '\n';
            }
        }
        printf("%s\n", str);
    }

    return 0;
}