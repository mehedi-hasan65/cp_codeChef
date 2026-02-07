#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int x, n;
        cin >> x >> n;

        if (n / 100 <= x)
        {
            cout << "0" << endl;
        }
        else
        {
            if (n % 100 == 0)
            {
                int y = n / 100;
                int result = y - x;
                cout << result << endl;
            }
            else
            {
                int y = n / 100;
                y++;
                int result = y - x;
                cout << result << endl;
            }
        }
    }
    return 0;
}