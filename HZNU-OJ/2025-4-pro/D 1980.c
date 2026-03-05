#include <stdio.h>
int jos(int n);
int main()
{
    int n, s, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        s = jos(n);
        printf("%d ", s);
    }
    return 0;
}

int jos(int n)
{
    // 编号 = 数组下标 + 1
    int arr[n];

    // 全部标记为 1
    for (int i = 0; i < n; i++)
    {
        arr[i] = 1;
    }

    // 场上还剩多少人
    int alive = n;

    // 下标
    int len = 0;

    while (alive > 1)
    {
        // 在在场的人中 + 7
        int temp = 0;
        while (temp < 7)
        {
            if (arr[len] == 1)
            {
                temp++;
            }

            len++;
            
            if (len == n)
            {
                len -= n;
            }
        }

        len--;
        if (len < 0)
        {
            len += n;
        }

        if (arr[len] == 1)
        {
            arr[len] = 0;
            alive--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            return i + 1;
        }
    }

    return 0;
}