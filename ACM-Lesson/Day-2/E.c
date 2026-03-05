#include <stdio.h>

int main()
{
    int arr[3];
    scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int a = arr[0];
    int b = arr[1];
    int c = arr[2];

    int a2 = a * a;
    int b2 = b * b;
    int c2 = c * c;

    if (a + b <= c)
    {
        printf("Not triangle\n");
    }
    else
    {
        if (a2 + b2 == c2)
        {
            printf("Right triangle\n");
        }
        if (a2 + b2 > c2)
        {
            printf("Acute triangle\n");
        }
        if (a2 + b2 < c2)
        {
            printf("Obtuse triangle\n");
        }
        if (a == b || a == c || b == c)
        {
            printf("Isosceles triangle\n");
        }
        if (a == b && b == c)
        {
            printf("Equilateral triangle\n");
        }
    }

    return 0;
}