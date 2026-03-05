#include <stdio.h>

int main()
{
    char str[200];
    int len = 0; // 当前单词的长度
    char c;      // 存储每次读取的字母

    while ((c = getchar()) && (c != '\n'))
    {
        // 读取到' ', 即之后还有单词
        if (c == ' ')
        {
            for (int i = len - 1; i >= 0; i--)
            {
                printf("%c", str[i]);
            }
            printf(" ");
            len = 0;
        }
        else
        {
            str[len] = c;
            len++;
        }
    }

    // 最后一个单词, 后面没有' ', 单独拿出来考虑
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}