// STL Practice —— 【prev_permutation&next_permutation (1)】

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    int N;
    while (cin >> N)
    {
        vector<int> v;
        for (int i = 1; i <= N; i++)
        {
            v.push_back(i);
        }

        do
        {
            for (int num : v)
            {
                printf("%d", num);
            }
            printf("\n");
        } while (next_permutation(v.begin(), v.end()));

        // 关键: next_permutation函数返回false后会将数组重置, 这里要手动排序
        v.clear();
        for (int i = N; i >= 1; i--)
        {
            v.push_back(i);
        }

        do
        {
            for (int num : v)
            {
                printf("%d", num);
            }
            printf("\n");
        } while (prev_permutation(v.begin(), v.end()));
        printf("\n");
    }

    return 0;
}