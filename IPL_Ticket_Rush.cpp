#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        int ans = n - m;
        if (ans <= 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}
