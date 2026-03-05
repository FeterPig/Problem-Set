#include <stdio.h>

int main()
{
    int a1, a2, a3, a4, M, ak_flag, rank;

    while (scanf("%d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &M, &ak_flag, &rank) == 7)
    {
        double total = 0.0;

        if (a1 > 0)
            total += (double)M / a1;
        if (a2 > 0)
            total += (double)M / a2;
        if (a3 > 0)
            total += (double)M / a3;
        if (a4 > 0)
            total += (double)M / a4;

        if (ak_flag == 1)
            total += 5;
        if (rank == 1)
            total += 5;
        else if (rank == 2)
            total += 3;
        else if (rank == 3)
            total += 1;

        printf("%.2f\n", total);
    }

    return 0;
}