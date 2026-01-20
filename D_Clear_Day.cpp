#include <iostream>
using namespace std;
int main()
{
    int rainy, cloudy;
    cin >> rainy >> cloudy;
    int clear = 7 - rainy - cloudy;
    cout << clear << endl;
    return 0;
}
