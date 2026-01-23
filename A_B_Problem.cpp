#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    long long result = x / y;
    long long mod = x % y;
    double ans = (double)x / y;
    cout << result << " " << mod << " ";
    cout << fixed << setprecision(5) << ans << endl;
    return 0;
}
