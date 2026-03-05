#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Interval
{
    ll L;
    ll R;
    int idx;
    Interval(ll L, ll R, int idx) : L(L), R(R), idx(idx) {}
};

struct Bridge
{
    ll len;
    int idx;
    Bridge(ll len, int idx) : len(len), idx(idx) {}
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<ll> l(n), r(n);
    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
    }

    vector<Interval> intervals;
    for (int i = 0; i < n - 1; i++)
    {
        ll gap_min = l[i + 1] - r[i];
        ll gap_max = r[i + 1] - l[i];
        intervals.push_back(Interval(gap_min, gap_max, i));
    }

    vector<Bridge> bridges;
    for (int i = 0; i < m; i++)
    {
        ll a;
        cin >> a;
        bridges.push_back(Bridge(a, i));
    }

    sort(intervals.begin(), intervals.end(), [](const Interval &a, const Interval &b)
         { return a.L < b.L; });

    sort(bridges.begin(), bridges.end(), [](const Bridge &a, const Bridge &b)
         { return a.len < b.len; });

    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> heap;
    vector<int> assignment(n - 1, -1);
    int j = 0;
    for (int i = 0; i < m; i++)
    {
        ll a = bridges[i].len;
        int bridge_idx = bridges[i].idx;

        while (j < n - 1 && intervals[j].L <= a)
        {
            heap.push(make_pair(intervals[j].R, intervals[j].idx));
            j++;
        }

        while (!heap.empty() && heap.top().first < a)
        {
            heap.pop();
        }

        if (!heap.empty())
        {
            auto top = heap.top();
            heap.pop();
            int interval_idx = top.second;
            assignment[interval_idx] = bridge_idx;
        }
    }

    bool all_assigned = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (assignment[i] == -1)
        {
            all_assigned = false;
            break;
        }
    }

    if (!all_assigned)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
        for (int i = 0; i < n - 1; i++)
        {
            if (i > 0)
                cout << " ";
            cout << assignment[i] + 1;
        }
        cout << endl;
    }

    return 0;
}