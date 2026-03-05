#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    float arr[T];
    int n; // n元
    int m; // m人

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &n, &m);
        arr[i] = (float)n / m;
    }

    for (int i = 0; i < T; i++)
    {
        printf("%f", arr[i]);
        printf("\n");
    }

    return 0;
}