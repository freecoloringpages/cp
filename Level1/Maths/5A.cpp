#include <bits/stdc++.h>
using namespace std;

const int oo=0;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    int a,b,c,d; cin >> a >> b >> c >> d;
    long long ans = (long long)((long long)(a*b) - (long long)(c*d));
    cout << "Difference = " << ans;

    return 0;
}
