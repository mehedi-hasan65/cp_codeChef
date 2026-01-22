#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long stamina, damage;
    cin >> stamina >> damage;
    long long attack = (stamina + damage - 1) / damage;
    cout << attack << endl;
}