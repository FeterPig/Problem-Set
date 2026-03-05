#include <bits/stdc++.h>
using namespace std;

int main()
{
    int quanzhong[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char jiaoyanma[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

    int n;
    cin >> n;
    cin.ignore(); // 清空缓存区

    bool all_passed = true;

    for (int i = 0; i < n; i++)
    {
        string id;
        getline(cin, id);

        int sum = 0;
        for (int j = 0; j < 17; j++)
        {
            sum += (id[j] - '0') * quanzhong[j];
        }

        if (id[17] != jiaoyanma[sum % 11])
        {
            cout << id << endl;
            all_passed = false;
        }
    }

    if (all_passed)
    {
        cout << "All passed" << endl;
    }

    return 0;
}