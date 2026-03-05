#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int arr[3];
    scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int a = arr[0];
    int b = arr[2];

    // 约分
    int yf = gcd(a, b);
    a = a / yf;
    b = b / yf;

    printf("%d/%d", a, b);

    return 0;
}