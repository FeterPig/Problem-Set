#include <stdio.h>
#include <string.h>

int main()
{
    char str[30][10] = {{'\0'}};
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            int temp = getchar();
            if (temp == ' ')
            {
                break;
            }
            if (temp == '\n')
            {
                goto flag;
            }
            else
            {
                str[i][j] = temp;
            }
        }
    }

flag:

    // printf("%s", str[2]);
    for (int i = 0; i < 30; i++)
    {
        if ((str[i][0] == 'Q') || (str[i][0] == 'q'))
        {
            printf("%s\n", str[i]);
        }
    }

    return 0;
}