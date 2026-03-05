#include <stdio.h>

int main()
{
    int t = 0;
    scanf("%d", &t);

    while (t--)
    {
        int n = 0;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int res = arr[0];
        for (int i = 1; i < n; i++)
        {
            res = res ^ arr[i];
        }

        printf("%d", res);
    }

    return 0;
}