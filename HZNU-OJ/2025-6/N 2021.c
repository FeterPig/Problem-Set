#include <stdio.h>
#include <string.h>

int main()
{
    int T = 0;

    scanf("%d", &T);
    getchar();

    while (T--)
    {
        int n = 0;
        int m = 0;

        scanf("%d%d", &n, &m);
        getchar();

        char qinghua[n][1000];
        char caozuo[m][4];

        for (int i = 0; i < n; i++)
        {
            fgets(qinghua[i], 1000, stdin);
            qinghua[i][strcspn(qinghua[i], "\n")] = '\0';
        }

        for (int i = 0; i < m; i++)
        {
            scanf(" %c %c %c", &caozuo[i][0], &caozuo[i][1], &caozuo[i][2]);
        }

        for (int i = 0; i < m; i++)
        {
            if (caozuo[i][0] == 'A')
            {
                strcat(qinghua[(int)caozuo[i][1] - (int)'0' - 1], qinghua[(int)caozuo[i][2] - (int)'0' - 1]);
            }
            else if (caozuo[i][0] == 'C')
            {
                strcpy(qinghua[(int)caozuo[i][1] - (int)'0' - 1], qinghua[(int)caozuo[i][2] - (int)'0' - 1]);
            }
        }

        printf("%s\n", qinghua[0]);
    }

    return 0;
}