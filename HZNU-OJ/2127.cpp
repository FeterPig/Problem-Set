#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long A, B;
        int K;
        cin >> A >> B >> K;

        long long sum = A + B;

        // 特判 ?
        if (sum == 0)
        {
            cout << "0" << endl;
            continue;
        }

        vector<int> every_bit;
        while (sum > 0)
        {
            every_bit.push_back(sum % K);
            sum /= K;
        }

        // 逆序
        reverse(every_bit.begin(), every_bit.end());
        for (int digit : every_bit)
        {
            cout << digit;
        }
        cout << endl;
    }

    return 0;
}