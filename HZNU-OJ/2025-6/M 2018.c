#include <stdio.h>

int main()
{
    int sum1 = 0;
    int sum2 = 0;
    int temp = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &temp);
        sum1 += temp;
    }
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &temp);
        sum2 += temp;
    }

    if (sum1 >= sum2)
    {
        printf("why am i so diao?");
    }
    else
    {
        printf("cjc died!");
    }

    return 0;
}