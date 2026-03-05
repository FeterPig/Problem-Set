#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    struct Data
    {
        char name[10];
        double lesson_1;
        double lesson_2;
        double lesson_3;
        double avg;
    } arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%s%lf%lf%lf", arr[i].name, &arr[i].lesson_1, &arr[i].lesson_2, &arr[i].lesson_3);
    }

    // 打印第一部分
    int lesson_max_n = 0;

    // lesson_1
    for (int i = 0; i < n; i++)
    {
        if (arr[i].lesson_1 > arr[lesson_max_n].lesson_1)
        {
            lesson_max_n = i;
        }
    }
    printf("%s,%.2f,%.2f,%.2f\n", arr[lesson_max_n].name, arr[lesson_max_n].lesson_1, arr[lesson_max_n].lesson_2, arr[lesson_max_n].lesson_3);

    // lesson_2
    for (int i = 0; i < n; i++)
    {
        if (arr[i].lesson_2 > arr[lesson_max_n].lesson_2)
        {
            lesson_max_n = i;
        }
    }
    printf("%s,%.2f,%.2f,%.2f\n", arr[lesson_max_n].name, arr[lesson_max_n].lesson_1, arr[lesson_max_n].lesson_2, arr[lesson_max_n].lesson_3);

    // lesson_3
    for (int i = 0; i < n; i++)
    {
        if (arr[i].lesson_3 > arr[lesson_max_n].lesson_3)
        {
            lesson_max_n = i;
        }
    }
    printf("%s,%.2f,%.2f,%.2f\n", arr[lesson_max_n].name, arr[lesson_max_n].lesson_1, arr[lesson_max_n].lesson_2, arr[lesson_max_n].lesson_3);
    printf("\n");

    // 打印第二部分
    for (int i = 0; i < n; i++)
    {
        arr[i].avg = (arr[i].lesson_1 + arr[i].lesson_2 + arr[i].lesson_3) / 3;
    }

    int arr_n[n];
    for (int i = 0; i < n; i++)
    {
        arr_n[i] = i;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[arr_n[j]].avg < arr[arr_n[j + 1]].avg)
            {
                int temp = arr_n[j];
                arr_n[j] = arr_n[j + 1];
                arr_n[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s,%.2f,%.2f,%.2f\n", arr[arr_n[i]].name, arr[arr_n[i]].lesson_1, arr[arr_n[i]].lesson_2, arr[arr_n[i]].lesson_3);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        if (arr[arr_n[i]].avg > 80)
        {
            printf("%s,%.2f,%.2f,%.2f,%.2f\n", arr[arr_n[i]].name, arr[arr_n[i]].lesson_1, arr[arr_n[i]].lesson_2, arr[arr_n[i]].lesson_3, arr[arr_n[i]].avg);
        }
        if (arr[arr_n[i]].avg < 80)
        {
            break;
        }
    }

    return 0;
}