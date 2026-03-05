#include <stdio.h>

// 表示n个盘子从c1位置移动到c3位置，借助c2。
void move(int n, char c1, char c2, char c3);
int main()
{
    int n;
    scanf("%d", &n);
    move(n, 'a', 'b', 'c');
}

void move(int n, char c1, char c2, char c3)
{
    if (n == 1)
    {
        // 如果只有一个盘子, 直接c1->c3
        printf("%c->%c\n", c1, c3);
        // return 0;
    }
    else
    {
        // 除了最大的盘子, c1->c2
        move(n - 1, c1, c3, c2);
        // 直接移动最大的盘子, c1->c3
        printf("%c->%c\n", c1, c3);
        // 除了最大的盘子, c2->c3
        move(n - 1, c2, c1, c3);
        // return 0;
    }
}