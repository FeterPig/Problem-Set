#include <stdio.h>
#include <string.h>

int main()
{
    int n = 0; // 每组数据有n行
    int count = 0;

    // 只要读取到数据, 就一直循环
    // scanf()的返回值是读取到的数据的数量
    while (scanf("%d", &n) == 1)
    {
        for (int i = 0; i < n; i++)
        {
            char str[10];
            scanf("%s", str);

            // Ture
            if (strlen(str) == 4)
            {
                count++;
            }
        }
        printf("%d\n", count);

        n = 0;
        count = 0;
    }

    return 0;
}