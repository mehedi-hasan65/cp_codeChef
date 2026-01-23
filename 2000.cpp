#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bigNote, smallNote;
    cin >> bigNote;
    int totalFee = bigNote * 2000;
    smallNote = totalFee / 500;
    cout << smallNote << endl;
}
