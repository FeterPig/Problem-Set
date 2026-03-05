#include <stdio.h>

int main()
{
    int matrix[3][3];
    while (scanf("%d", &matrix[0][0]) != EOF)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i == 0 && j == 0)
                {
                    continue;
                }
                scanf("%d", &matrix[i][j]);
            }
        }
        for (int j = 0; j < 3; j++)
        {
            for (int i = 0; i < 3; i++)
            {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}