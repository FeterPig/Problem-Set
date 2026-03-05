#include <stdio.h>

void func(int arr[], int *max, int *min, double *avg)
{
    *max = arr[0];
    *min = arr[0];
    *avg = 0;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
        *avg += arr[i];
    }

    *avg = *avg / 10.0;
}

int main()
{
    int arr[10];
    int max, min;
    double avg;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    func(arr, &max, &min, &avg);

    printf("%d %d %.2f\n", max, min, avg);

    return 0;
}