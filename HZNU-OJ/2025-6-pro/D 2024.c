#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    while (scanf("%s", str) != EOF)
    {
        int len = strlen(str);

        int ab_xb[100];
        int ab_n = 0;
        for (int i = 0; i < len - 1; i++)
        {
            if (str[i] == 'A' && str[i + 1] == 'B')
            {
                ab_xb[ab_n] = i;
                ab_n++;
            }
        }

        int ba_xb[100];
        int ba_n = 0;
        for (int i = 0; i < len - 1; i++)
        {
            if (str[i] == 'B' && str[i + 1] == 'A')
            {
                ba_xb[ba_n] = i;
                ba_n++;
            }
        }

        for (int i = 0; i < ab_n; i++)
        {
            int ab_a = ab_xb[i];
            int ab_b = ab_xb[i] + 1;
            for (int j = 0; j < ba_n; j++)
            {
                int ba_b = ba_xb[j];
                int ba_a = ba_xb[j] + 1;

                if (ab_b < ba_b || ba_a < ab_a)
                {
                    // 找到非重叠
                    printf("yu ye sa wang dai xing\n");
                    goto end;
                }
            }
        }
        printf("zhen shi ou ba\n");
    end:
    }
    return 0;
}