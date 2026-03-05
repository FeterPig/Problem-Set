// STL Practice —— 【map (1)】

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        // 无序哈希表
        unordered_map<string, int> m;

        while (N--)
        {
            string temp_1;
            int temp_2;
            cin >> temp_1 >> temp_2;
            m[temp_1] = temp_2;
        }

        int Q;
        cin >> Q;

        while (Q--)
        {
            string temp_3;
            cin >> temp_3;

            // 直到未迭代器都没找到, 说明键不存在
            if (m.find(temp_3) == m.end())
            {
                cout << "error" << endl;
            }
            else
            {
                cout << m[temp_3] << endl;
            }
        }
    }

    return 0;
}