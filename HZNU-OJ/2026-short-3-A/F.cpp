#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 左到右无优先级计算
int eval(const string &formula, int B, int C)
{
    int result = 0;
    char op = '+';
    for (size_t i = 0; i < formula.size();)
    {
        int val = 0;
        if (formula[i] == 'B')
        {
            val = B;
            i++;
        }
        else if (formula[i] == 'C')
        {
            val = C;
            i++;
        }
        else
        {
            op = formula[i];
            i++;
            continue;
        }
        if (op == '+')
            result += val;
        else if (op == '-')
            result -= val;
        else
            result *= val;
    }
    return result;
}

int main()
{
    vector<int> L3(7), L4(8);
    for (int i = 0; i < 7; i++)
        cin >> L3[i];
    for (int i = 0; i < 8; i++)
        cin >> L4[i];

    // 生成所有可能的公式
    vector<string> formulas;
    vector<string> operands = {"B", "C"};
    vector<char> ops = {'+', '-', '*'};

    // 0个运算符
    formulas.push_back("B");
    formulas.push_back("C");

    // 1个运算符
    for (auto &x : operands)
        for (auto &y : operands)
            for (char op : ops)
                formulas.push_back(x + op + y);

    // 2个运算符
    for (auto &x : operands)
        for (auto &y : operands)
            for (auto &z : operands)
                for (char op1 : ops)
                    for (char op2 : ops)
                        formulas.push_back(x + op1 + y + op2 + z);

    // 寻找正确公式
    string found;
    for (auto &f : formulas)
    {
        bool ok = true;
        for (int i = 0; i < 7; i++)
        {
            if (eval(f, L4[i], L4[i + 1]) != L3[i])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            found = f;
            break;
        }
    }

    // 计算第二层
    vector<int> L2(6);
    for (int i = 0; i < 6; i++)
        L2[i] = eval(found, L3[i], L3[i + 1]);

    // 计算第一层
    vector<int> L1(5);
    for (int i = 0; i < 5; i++)
        L1[i] = eval(found, L2[i], L2[i + 1]);

    // 输出
    for (int i = 0; i < 5; i++)
        cout << L1[i] << (i == 4 ? '\n' : ' ');
    for (int i = 0; i < 6; i++)
        cout << L2[i] << (i == 5 ? '\n' : ' ');
    for (int i = 0; i < 7; i++)
        cout << L3[i] << (i == 6 ? '\n' : ' ');
    for (int i = 0; i < 8; i++)
        cout << L4[i] << (i == 7 ? '\n' : ' ');
    cout << "A=" << found << endl;

    return 0;
}
