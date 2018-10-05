#include <bits/stdc++.h>
using namespace std;

const double pi=3.14159;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    long double r; cin >> r;
    cout << fixed << setprecision(3);
    long double vol = (4/3.0)*pi*r*r*r;
    cout << "VOLUME = " << vol;

    return 0;
}
