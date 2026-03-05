#include <stdio.h>
#include <math.h>
void happy(int row);
int main()
{
    happy(9);
    return 0;
}

// row == 9
void happy(int row)
{
    if (row == 0)
    {
        // void函数可以用不加修饰的return
        return;
    }
    happy(row - 1);

    for (int i = 1; i <= row; i++)
    {
        printf("%d*%d=%d", i, row, i * row);
        if (i != row)
        {
            printf(" ");
        }
    }
    printf("\n");
}