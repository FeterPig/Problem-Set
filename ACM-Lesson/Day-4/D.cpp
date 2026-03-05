#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int arr[s1 + s2 + s3 + 1] = {0};

    for (int i = 1; i <= s1; i++)
    {
        for (int j = 1; j <= s2; j++)
        {
            for (int k = 1; k <= s3; k++)
            {
                int sum = i + j + k;
                arr[sum]++;
            }
        }
    }

    int ans = 0;
    int max = 0;

    for (int sum = 3; sum <= s1 + s2 + s3; sum++)
    {
        if (arr[sum] > max)
        {
            max = arr[sum];
            ans = sum;
        }
    }
    cout << ans << endl;
    return 0;
}
