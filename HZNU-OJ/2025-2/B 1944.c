#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);

    printf("DEC:%d\n", a); // 十进制
    printf("OCT:%o\n", a); // 八进制
    printf("HEX:%x\n", a); // 十六进制
    // 补充: 二进制是 BIN

    return 0;
}