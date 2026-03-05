#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        // 读取所有数据
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        // 选取偶数数据
        int j = 0;
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0 && arr[i] != 0)
            {
                arr2[j] = arr[i];
                j++;
            }
        }

        int sum = 0;
        int square_sum = 0;
        float dao_sum = 0.0;
        for (int i = 0; i < j; i++)
        {
            sum += arr2[i];
        }
        for (int i = 0; i < j; i++)
        {
            square_sum += arr2[i] * arr2[i];
        }
        for (int i = 0; i < j; i++)
        {
            dao_sum += 1.0 / arr2[i];
        }
        printf("%d %d %.2f\n", sum, square_sum, dao_sum);
    }

    return 0;
}