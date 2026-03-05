// 类似括号匹配

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char s[32];
    // 栈
    char stack[32];
    // 栈中元素个数
    int top = 0;

    scanf("%d%s", &n, s);

    for (int i = 0; i < n; i++)
    {
        // 栈非空且相邻两元素不同
        if (top > 0 && stack[top - 1] != s[i])
        {
            // 出栈
            top--;
        }
        else
        {
            stack[top] = s[i];
            // 入栈
            top++;
        }
    }

    printf("%d\n", top);
    return 0;
}