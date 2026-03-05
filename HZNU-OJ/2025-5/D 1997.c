#include <stdio.h>

void func(int sum, int *p_avg)
{
    *p_avg = sum;
}

int main()
{
    int sum = 0, temp = 0, avg = 0;

    while (scanf("%d", &temp) != EOF)
    {
        sum = temp;

        for (int i = 0; i < 9; i++)
        {
            scanf("%d", &temp);
            sum += temp;
        }

        func(sum, &avg);

        printf("%.2f\n", (double)avg / 10.0);

        sum = 0;
    }

    return 0;
}