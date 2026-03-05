#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (abs(arr[j]) > abs(arr[j + 1]))
                {
                    int temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n\n");
    }

    return 0;
}