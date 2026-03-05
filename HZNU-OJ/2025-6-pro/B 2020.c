#include <stdio.h>
#include <string.h>

int main()
{
    int t = 0;
    scanf("%d", &t);
    while (t--)
    {
        char name[20] = {'\0'};
        scanf("%s", name);
        getchar();

        char str[1000] = {'\0'};
        fgets(str, 1000, stdin);

        for (int i = 0; i < strlen(str); i++)
        {
            int n = 0;
            for (int j = 0; j < strlen(name); j++)
            {
                if (name[j] == str[i + j])
                {
                    n++;
                }
                else
                {
                    break;
                }
            }

            // 找到目标单词, 从下标i开始
            if (n == strlen(name))
            {
                printf("doctorZ");
                i += strlen(name) - 1;
            }
            else
            {
                putchar(str[i]);
            }
        }
    }

    return 0;
}