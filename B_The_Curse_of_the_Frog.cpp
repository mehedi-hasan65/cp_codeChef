#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long x;
        cin >> n >> x;

        long long free = 0;
        long long best = LLONG_MIN;

        for (int i = 0; i < n; i++)
        {
            long long a, b, c;
            cin >> a >> b >> c;

            free = max(free, (b - 1) * a);
            best = max(best, b * a - c);
        }

        if (free >= x)
        {
            cout << 0 << "\n";
        }
        else if (best <= 0)
        {
            cout << -1 << "\n";
        }
        else
        {
            long long remaining = x - free;
            long long rollbacks = (remaining + best - 1) / best;
            cout << rollbacks << "\n";
        }
    }

    return 0;
}
