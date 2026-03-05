#include <stdio.h>

int isPrime(int a)
{
    int i = 2, j = a - 1, result = -1;

    while (i <= a / 2)
    {
        while (j >= i)
        {
            if (i * j == a)
            {
                result = 0;
                goto end;
            }
            else
                j--;
        }
        i++;
        j = a - 1;
    }
    result = 1;

end:
    return result;
}

void print_prime(int a)
{
    printf("%d\n", a);
}

int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);

    while (a <= b)
    {
        int is = isPrime(a);

        switch (is)
        {
        case 1:
            print_prime(a);
            break;

        default:
            break;
        }
        a++;
    }

    return 0;
}