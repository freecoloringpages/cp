#include <bits/stdc++.h>
using namespace std;

#define sqr(x) x*x

const double pi=3.14159;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << fixed << setprecision(9);
    long double d = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    cout << d;

    return 0;
}
