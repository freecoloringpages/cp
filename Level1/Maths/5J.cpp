#include <bits/stdc++.h>
using namespace std;

#define sqr(x) x*x

const double pi=3.14159;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int a,b; cin >> a >> b;
    long long ans=0;
    if (a>b) swap(a,b);
    for (int i=a; i<=b; i++) ans+=i;
    cout << ans;
    return 0;
}
