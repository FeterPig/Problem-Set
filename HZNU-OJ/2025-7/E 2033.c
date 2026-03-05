#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    getchar();

    struct Gumu
    {
        char canshu[5];
        int youxianji;
    } arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%s%d", arr[i].canshu, &arr[i].youxianji);
        getchar();
    }

    // 给下标排序 [下标][序号] ,优先级从低到高
    int arr_s[n][2];
    for (int i = 0; i < n; i++)
    {
        arr_s[i][0] = arr[i].youxianji;
        arr_s[i][1] = i;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr_s[j][0] > arr_s[j + 1][0])
            {
                int temp0 = 0;
                int temp1 = 0;

                temp0 = arr_s[j][0];
                temp1 = arr_s[j][1];

                arr_s[j][0] = arr_s[j + 1][0];
                arr_s[j][1] = arr_s[j + 1][1];

                arr_s[j + 1][0] = temp0;
                arr_s[j + 1][1] = temp1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = 0; j < 10; j++)
        {
            if (arr_s[j][1] == i)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%s ", arr[i].canshu);
        }
    }

    return 0;
}