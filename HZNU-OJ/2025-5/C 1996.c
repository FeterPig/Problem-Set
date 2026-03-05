#include <stdio.h>

void func(float arr[3])
{
    float a = arr[0];
    float b = arr[1];
    float c = arr[2];

    float min = a;
    float mid = a;
    float max = a;

    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }

    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    if (a != max && a != min)
    {
        mid = a;
    }
    else if (b != max && b != min)
    {
        mid = b;
    }
    else if (c != max && c != min)
    {
        mid = c;
    }

    printf("%.1f ", min);
    printf("%.1f ", mid);
    printf("%.1f", max);
}

int main()
{
    float arr[3] = {0.0};
    while (scanf("%f %f %f", &arr[0], &arr[1], &arr[2]) != EOF)
    {
        func(arr);
        printf("\n");

        // for (int i = 0; i < 3; i++)
        // {
        //     printf("%.1f ", &arr[i]);
        // }
    }

    return 0;
}