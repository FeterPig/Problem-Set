#include <stdio.h>

int main()
{
    int t, s, m, h;
    scanf("%d", &t);
    int tt = t;

    for (h = 0;; h++)
    {
        if ((tt / 3600) < 1)
        {
            break;
        }
        tt -= 3600;
    }

    for (m = 0;; m++)
    {
        if ((tt / 60) < 1)
        {
            break;
        }
        tt -= 60;
    }

    s = tt;

    printf("%d %d %d", h, m, s);

    return 0;
}