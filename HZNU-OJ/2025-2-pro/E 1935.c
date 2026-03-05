#include <stdio.h>

int main()
{
    // 成功破坏: 1,4,7,10...

    int T; // T组数据
    scanf("%d", &T);
    int n[T]; // 第n天

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < T; i++)
    {
        if ((n[i] - 1) % 3 == 0)
        {
            printf("showshowshow\n");
        }
        else
        {
            printf("forever love\n");
        }
    }

    return 0;
}