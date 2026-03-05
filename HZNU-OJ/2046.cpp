#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int temp_1, temp_2;
        scanf("%d:%d", &temp_1, &temp_2);
        int t_0 = temp_1 * 60 + temp_2;

        int n, k;
        cin >> n >> k;

        while (n--)
        {
            int temp_3, temp_4;
            scanf("%d:%d", &temp_3, &temp_4);
            int t_1 = temp_3 * 60 + temp_4;

            while (t_1 < t_0)
            {
                t_1 += k;
            }

            if (t_1 == t_0)
            {
                cout << "RUNRUNRUN!" << endl;
            }
            else
            {
                cout << "SLEEPSLEEPSLEEP!" << endl;
            }
        }
    }

    return 0;
}