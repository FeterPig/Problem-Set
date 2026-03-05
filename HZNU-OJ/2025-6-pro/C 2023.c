#include <stdio.h>
#include <string.h>

int main()
{
    int t = 0;
    scanf("%d", &t);

    while (t--)
    {
        int n = 0;
        scanf("%d", &n);

        char max[25] = {'\0'};
        scanf("%s", max);
        // getchar();

        for (int i = 0; i < n - 1; i++)
        {
            char temp[25] = {'\0'};
            scanf("%s", temp);
            if (strlen(temp) > strlen(max))
            {
                strcpy(max, temp);
            }
            else if (strlen(temp) == strlen(max))
            {
                int len = strlen(max);
                for (int j = 0; j < len; j++)
                {
                    if (temp[j] > max[j])
                    {
                        strcpy(max, temp);
                        break;
                    }
                    else if (temp[j] < max[j])
                    {
                        break;
                    }
                }
            }
        }
        printf("%s\n", max);
    }

    return 0;
}