#include <stdio.h>

void fun0(int n)
{
    printf("这是1号函数的打印输出。\n");
}
void fun1(int n)
{
    printf("这是2号函数的打印输出。\n");
}
void fun2(int n)
{
    printf("这是3号函数的打印输出。\n");
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        void (*ptr[3])(int) = {fun0, fun1, fun2};
        switch (n)
        {
        case 1:
            ptr[0](n);
            break;
        case 2:
            ptr[1](n);
            break;
        case 3:
            ptr[2](n);
            break;
        }
    }
    return 0;
}