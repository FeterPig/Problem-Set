#include <bits/stdc++.h>
using namespace std;

int func(string str)
{
    if (isdigit(str[0]))
    {
        return stoi(str);
    }
    // 第一个(
    int start = str.find('(');
    string func_name = str.substr(0, start);

    string str_in_kuohao = str.substr(start + 1, str.length() - start - 2);

    int kuohao = 0;
    int douhao = -1;
    for (int i = 0; i < str_in_kuohao.length(); i++)
    {
        if (str_in_kuohao[i] == '(')
        {
            kuohao++;
        }
        else if (str_in_kuohao[i] == ')')
        {
            kuohao--;
        }
        else if (str_in_kuohao[i] == ',' && kuohao == 0)
        {
            douhao = i;
            break;
        }
    }

    // 递归
    string part_1 = str_in_kuohao.substr(0, douhao);
    string part_2 = str_in_kuohao.substr(douhao + 1);

    int a = func(part_1);
    int b = func(part_2);

    if (func_name == "add")
    {
        return a + b;
    }
    else if (func_name == "min")
    {
        return min(a, b);
    }
    else if (func_name == "max")
    {
        return max(a, b);
    }
}

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    for (int i = 0; i < N; i++)
    {
        string str;
        getline(cin, str);
        cout << func(str) << endl;
    }

    return 0;
}