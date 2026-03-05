#include <stdio.h>

int main()
{
    int N = 0;
    while (scanf("%d", &N) == 1)
    {
        int a, b, c; // 百位,十位,个位
        if (N < 10)
        {
            a = 0;
            b = 0;
            c = N;
        }
        else if (N < 100)
        {
            a = 0;
            b = N / 10;
            c = N % 10;
        }
        else
        {
            a = N / 100;
            b = (N / 10) % 10;
            c = N % 10;
        }
        printf("%d", N);
        a != 0 ? printf("rd") : printf("ss");
        b == 1 || b == 5 || b == 9 ? printf("nd") : printf("ss");
        c == 3 || c == 7 || c == 2 ? printf("st") : printf("ss");
        printf("\n");
    }

    return 0;
}