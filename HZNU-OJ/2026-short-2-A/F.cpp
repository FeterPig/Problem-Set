#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a1, b1, c1, d1;
    int a2, b2, c2, d2;
    scanf("%d.%d.%d.%d", &a1, &b1, &c1, &d1);
    scanf("%d.%d.%d.%d", &a2, &b2, &c2, &d2);
    int na = a1 & a2;
    int nb = b1 & b2;
    int nc = c1 & c2;
    int nd = d1 & d2;
    int N;
    scanf("%d", &N);
    while (N--)
    {
        int x, y, z, w;
        scanf("%d.%d.%d.%d", &x, &y, &z, &w);
        if ((x & a2) == na && (y & b2) == nb && (z & c2) == nc && (w & d2) == nd)
        {
            printf("INNER\n");
        }
        else
        {
            printf("OUTER\n");
        }
    }

    return 0;
}
