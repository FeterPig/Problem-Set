#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int a_quan, a_xinqing;
        int b_quan, b_xinqing;
        int c_quan, c_xinqing;

        cin >> a_quan >> a_xinqing >> b_quan >> b_xinqing >> c_quan >> c_xinqing;

        int on = a_quan * a_xinqing + b_quan * b_xinqing + c_quan * c_xinqing;
        int down = a_quan + b_quan + c_quan;

        double sum = (double)on / down;

        printf("%.2f\n", sum);
    }

    return 0;
}