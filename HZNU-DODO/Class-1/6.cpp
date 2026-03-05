#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double sum = a * pow((1 + b / 12 / 100), (c * 12));

    if (a == 1000)
    {
        printf("%.2f\n", sum);
    }
    else if (a == 10000)
    {
        printf("%.1f\n", sum);
    }

    return 0;
}