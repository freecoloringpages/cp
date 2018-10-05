#include <bits/stdc++.h>
using namespace std;

#define sqr(x) x*x

const double pi=3.14159;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int a,b,c; cin >> a >> b >> c;
    if (a+b>c && a+c>b && b+c>a) cout << "Valid";
    else cout << "Invalid";

    return 0;
}
