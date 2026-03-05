#include <bits/stdc++.h>
using namespace std;

struct Score
{
    string name;
    int score_1;
    int score_2;
    int score_sum;

    Score() {}

    Score(string name, int score_1,
          int score_2)
    {
        this->name = name;
        this->score_1 = score_1;
        this->score_2 = score_2;

        score_sum = score_1 + score_2;
    }
};

bool cmp(Score x, Score y)
{
    return x.score_sum > y.score_sum;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<Score> v;
        for (int i = 0; i < N; i++)
        {
            string name;
            int score_1;
            int score_2;
            
            cin >> name >> score_1 >> score_2;
            Score temp(name, score_1, score_2);
            v.push_back(temp);
        }

        sort(v.begin(), v.end(), cmp);

        for (auto p = v.begin(); p != v.end(); p++)
        {
            cout << p->name << endl;
        }
    }

    return 0;
}