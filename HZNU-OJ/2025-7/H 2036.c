#include <stdio.h>

int main()
{
    int t = 0;
    int n = 0;
    scanf("%d%d", &t, &n);
    getchar();

    struct Liebiao
    {
        unsigned int suoyin;
        char str[25];
    } arr[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%u%s", &arr[i].suoyin, arr[i].str);
        getchar();
    }

    unsigned int tgt_suoyin[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%u", &tgt_suoyin[i]);
        getchar();
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (tgt_suoyin[i] == arr[j].suoyin)
            {
                printf("%s ", arr[j].str);
                break;
            }
        }
    }

    return 0;
}