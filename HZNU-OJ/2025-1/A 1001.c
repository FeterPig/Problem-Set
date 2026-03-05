#include <stdio.h>

int main()
{
    // T组输入
    int T = 0;
    scanf("%d", &T);

    // 每一组输入
    long long int arr[T];
    for (int i = 0; i < T; i++)
    {
        long long int a, b, c;
        scanf("%lld %lld", &a, &b);
        c = a + b;
        arr[i] = c;
    }

    // 输出
    for (int i = 0; i < T; i++)
    {
        printf("%lld\n", arr[i]);
    }

    return 0;
}