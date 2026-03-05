#include <bits/stdc++.h>
using namespace std;

int n, na, nb;
int sa, sb;

int main()
{
    cin >> n >> na >> nb;
    vector<int> va(na);
    vector<int> vb(nb);

    for (int i = 0; i < na; i++)
    {
        cin >> va[i];
    }
    for (int i = 0; i < nb; i++)
    {
        cin >> vb[i];
    }

    for (int i = 0; i < n; i++)
    {
        int ta = va[i % na];
        int tb = vb[i % nb];

        if ((ta == 0 && tb == 2) || (ta == 0 && tb == 3) ||
            (ta == 1 && tb == 0) || (ta == 1 && tb == 3) ||
            (ta == 2 && tb == 1) || (ta == 2 && tb == 4) ||
            (ta == 3 && tb == 2) || (ta == 3 && tb == 4) ||
            (ta == 4 && tb == 0) || (ta == 4 && tb == 1))
        {
            sa++;
        }
        else if ((tb == 0 && ta == 2) || (tb == 0 && ta == 3) ||
                 (tb == 1 && ta == 0) || (tb == 1 && ta == 3) ||
                 (tb == 2 && ta == 1) || (tb == 2 && ta == 4) ||
                 (tb == 3 && ta == 2) || (tb == 3 && ta == 4) ||
                 (tb == 4 && ta == 0) || (tb == 4 && ta == 1))
        {
            sb++;
        }
    }

    cout << sa << ' ' << sb << endl;

    return 0;
}
