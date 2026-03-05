#include <stdio.h>
#include <string.h>
#include <math.h>
int isPrime[1000011];
void getprime();
int main()
{
    int t;
    scanf("%d", &t);
    getprime();
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (isPrime[n])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

void getprime()
{
    isPrime[0] = 0;
    isPrime[1] = 0;

    for (int i = 2; i < 1000011; i++)
    {
        isPrime[i] = 1;
        if ((i % 2 == 0) && i != 2)
        {
            isPrime[i] = 0;
        }
    }
    for (int i = 2; i * i <= 1000010; i++)
    {
        if (isPrime[i] == 1)
        {
            for (int j = i * 2; j <= 1000010; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }
}