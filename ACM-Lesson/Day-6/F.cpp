#include <bits/stdc++.h>
using namespace std;

struct Data
{
    string name;
    int age;
    int score;
};

int main()
{
    int n;
    cin >> n;

    Data temp;
    while (n--)
    {
        cin >> temp.name >> temp.age >> temp.score;
        temp.age++;
        temp.score *= 1.2;
        if (temp.score > 600)
        {
            temp.score = 600;
        }
        cout << temp.name << ' ' << temp.age << ' ' << temp.score << endl;
    }


}