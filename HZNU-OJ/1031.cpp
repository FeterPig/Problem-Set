// STL Practice —— 【accumulate (1)】

#include <iostream>
#include <vector>
#include <numeric> // accumulate累加函数
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> v;

        while (N--)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        int a, b, s;
        cin >> a >> b >> s;
        int sum = accumulate(v.begin() + a, v.begin() + b + 1, s);
        cout << sum << endl;
    }

    return 0;
}