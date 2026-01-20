#include <iostream>
using namespace std;
int main()
{
    char c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    int a = c1 - '0';
    int b = c2 - '0';
    int c = c3 - '0';
    int abc = 100 * a + 10 * b + c;
    int bca = 100 * b + 10 * c + a;
    int cab = 100 * c + 10 * a + b;
    int ans = abc + bca + cab;

    cout << ans << endl;
    return 0;
}