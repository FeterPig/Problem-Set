#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    int arr[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 反转数字
    for (int i = 0; i < T; i++)
    {
        int a, b, c, d, sum;
        a = arr[i] % 10;       // 个位
        b = arr[i] / 10 % 10;  // 十位
        c = arr[i] / 100 % 10; // 百位
        d = arr[i] / 1000;     // 千位
        sum = a * 1000 + b * 100 + c * 10 + d;
        printf("%d\n", sum);
    }

    return 0;
}