#include <stdio.h>
#include <string.h>

int main()
{
    int N = 0;
    scanf("%d", &N);

    char str[N][30];

    for (int i = 0; i < N; i++)
    {
        scanf("%s", str[i]);
    }
    int len = strlen(str[0]);
    int res = 0;

    // 比较第i位
    for (int i = 0; i < len; i++)
    {
        // 把第一个和第j个比较
        for (int j = 1; j < N; j++)
        {
            if (str[0][i] != str[j][i])
            {
                goto end;
            }
        }
        res += 1;
    }

end:
    printf("%d", res);

    return 0;
}