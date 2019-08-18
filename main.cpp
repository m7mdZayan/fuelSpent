#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double dTime = 0 , dSpeed = 0, dDistance = 0,dLit = 0;
    cin >> dTime >>dSpeed;
    dDistance = dTime * dSpeed;
    dLit = dDistance / 12;
    cout << fixed << setprecision(3) << dLit << endl;
    return 0;
}
