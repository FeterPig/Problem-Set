#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    int arr[T];

    // 读取 T 组 n
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < T; i++)
    {
        // 如果n能被3和2整除
        // if (arr[i] % 6 == 0)
        // {
        //     printf("n divisible by 2 and 3? 1");
        // }
        // else
        // {
        //     printf("n divisible by 2 and 3? 0");
        // }

        // 可以用三元操作符!!
        arr[i] % 6 == 0 ? printf("%d divisible by 2 and 3? 1\n", arr[i]) : printf("%d divisible by 2 and 3? 0\n", arr[i]);

        // 如果n能被3整除或者能被2整除
        arr[i] % 3 == 0 || arr[i] % 2 == 0 ? printf("%d divisible by 2 or 3? 1\n", arr[i]) : printf("%d divisible by 2 or 3? 0\n", arr[i]);

        // 如果n能被2,3其中一个整除
        (arr[i] % 3 == 0 && arr[i] % 2 != 0) || (arr[i] % 3 != 0 && arr[i] % 2 == 0) ? printf("%d divisible by 2 or 3, but not both? 1\n", arr[i]) : printf("%d divisible by 2 or 3, but not both? 0\n", arr[i]);
    }

    return 0;
}