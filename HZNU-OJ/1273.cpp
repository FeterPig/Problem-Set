#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    // getchar();
    // 可以改用cpp风格的函数
    cin.ignore();

    map<string, int> map_m;
    string word;
    int value;
    for (int i = 0; i < m; i++)
    {
        cin >> word >> value;
        map_m[word] = value;
    }

    for (int i = 0; i < n; i++)
    {
        long long money = 0;
        string line;
        while (getline(cin, line))
        {
            if (line == ".")
            {
                break;
            }

            string temp;
            for (int j = 0; j <= line.length(); j++)
            {
                if (j == line.length() || line[j] == ' ')
                {
                    if (!temp.empty())
                    {
                        if (map_m.count(temp))
                        {
                            money += map_m[temp];
                        }
                        temp = "";
                    }
                }
                else
                {
                    temp += line[j];
                }
            }
        }
        cout << money << endl;
    }

    return 0;
}