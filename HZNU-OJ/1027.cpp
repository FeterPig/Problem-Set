// STL Practice —— 【map (2)】

#include <iostream>
#include <map>
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

        map<string, int> m;
        while (N--)
        {
            string temp;
            cin >> temp;
            if (m.find(temp) == m.end())
            {
                m[temp] = 1;
            }
            else
            {
                m[temp]++;
            }
        }

        cout << m.size() << endl;
        for (auto p = m.begin(); p != m.end(); p++)
        {
            cout << p->first << ": " << p->second << endl;
        }
        cout << endl;
    }

    return 0;
}