// STL Practice —— 【set (1)】

#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        set<int> s;
        while (n--)
        {
            int temp;
            cin >> temp;
            s.insert(temp);
        }
        cout << s.size() << endl;
        for (auto p = s.begin(); p != s.end(); p++)
        {
            cout << *p << " ";
        }
        cout << endl;
    }

    return 0;
}