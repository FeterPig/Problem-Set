#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);

            // 涉及到补码的储存和按位与的知识
            // x & (-x) 是一个非常实用的位运算技巧，
            // 其核心作用是提取出整数 x 的二进制表示中，
            // 从右往左（即最低位）第一个 1 所代表的数值。
            printf("%d ", arr[i] & (-arr[i]));
        }
        printf("\n");
    }

    return 0;
}