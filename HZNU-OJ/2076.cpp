#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // 吃掉换行符

    while (t--)
    {
        string str;
        getline(cin, str);

        // str.find() 若找到则返回起始索引, 若没找到则返回string::npos
        // 返回值类型为size_t
        size_t pos = str.find("print ");
        if (pos != string::npos)
        {
            str.replace(pos, 6, "print(");
            str += ")";
        }

        cout << str << endl;
    }

    return 0;
}