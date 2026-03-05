// STL Practice —— 【vector (1)】

#include <iostream>
#include <vector>
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

        int Q;
        cin >> Q;

        while (Q--)
        {
            char temp;
            cin >> temp;
            if (temp == 'U')
            {
                int i, j;
                cin >> i >> j;
                v.insert(v.begin() + i, j);
            }
            if (temp == 'D')
            {
                int i;
                cin >> i;
                v.erase(v.begin() + i);
            }
            if (temp == 'P')
            {
                for (auto p = v.begin(); p != v.end(); p++)
                {
                    if (p != v.end() - 1)
                    {
                        cout << *p << " ";
                    }
                    else
                    {
                        cout << *p;
                    }
                }
                cout << endl;
            }
        }
        cout << endl;
    }

    return 0;
}