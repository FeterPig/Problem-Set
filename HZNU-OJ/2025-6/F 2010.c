#include <stdio.h>

int main()
{
    int T = 0;
    scanf("%d", &T);

    while (T--)
    {
        int N = 0;
        scanf("%d", &N);

        // 实质就是斐波那契
        int a = 1;
        int b = 2;
        int c = 3;

        if (N == 1)
        {
            printf("%d\n", a);
        }
        else if (N == 2)
        {
            printf("%d\n", b);
        }
        else if (N >= 3)
        {
            // 迭代
            for (int i = 3; i < N; i++)
            {
                a = b;
                b = c;
                c = a + b;
            }
            printf("%d\n", c);
        }
    }

    return 0;
}