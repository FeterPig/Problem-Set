#include <stdio.h>

int main()
{
    int t = 0;
    scanf("%d", &t);
    while (t--)
    {
        int arr_1[23] = {0};
        int arr_2[23] = {0};

        int n = 0, m = 0;
        scanf("%d %d", &n, &m);
        while (n--)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            for (int i = a; i <= b; i++)
            {
                arr_1[i] = 1;
            }
        }
        while (m--)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            for (int i = a; i <= b; i++)
            {
                arr_2[i] = 1;
            }
        }

        int res = 0;
        for (int i = 0; i < 24; i++)
        {
            if (arr_1[i] == 1 && arr_2[i] == 1)
            {
                res++;
            }
        }
        printf("%d\n", res);
    }

    return 0;
}