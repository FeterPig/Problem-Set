// STL Practice —— 【binary_search (1)】
// 二分查找

#include <iostream>
#include <vector>
#include <algorithm> // 算法头文件, 包含二分查找相关函数
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

        // 有序数组才能二分查找
        sort(v.begin(), v.end());

        int Q;
        cin >> Q;

        while (Q--)
        {
            int tgt;
            cin >> tgt;
            bool bs = binary_search(v.begin(), v.end(), tgt);
            cout << (bs ? "Yes" : "No") << "\n";
        }
    }
}