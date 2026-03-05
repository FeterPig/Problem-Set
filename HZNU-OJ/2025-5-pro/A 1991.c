#include <stdio.h>

int main()
{
    char str[10000] = {'\0'};

    while (fgets(str, 10000, stdin) != NULL)
    {
        for (int i = 0; i < 10000;)
        {
            if (str[i] == '\0')
            {
                break;
            }
            else if (str[i] == str[i + 1])
            {
                for (int j = i + 1; j < 10000; j++)
                {

                    if (str[i] == '\0')
                    {
                        break;
                    }

                    str[j] = str[j + 1];
                }
            }
            else
            {
                i++;
            }
        }

        printf("%s", str);
    }

    return 0;
}