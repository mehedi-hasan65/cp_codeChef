#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bonesPeople, bloodPeople;
    cin >> bonesPeople >> bloodPeople;
    int bonesTreat, bloodsTreat;
    cin >> bonesTreat >> bloodsTreat;
    int totalTreat = bonesPeople * bonesTreat + bloodPeople * bloodsTreat;
    cout << totalTreat << endl;
}
