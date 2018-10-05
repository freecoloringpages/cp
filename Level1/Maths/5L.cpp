#include <bits/stdc++.h>
using namespace std;

#define sqr(x) x*x

const double pi=3.14159;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    long long n; cin >> n;
    long long ans=0;
    for (int i=1; i<=sqrt(n); i++)
        if (n%i==0){
            if (i==n/i) ans+=i;
            else ans+=(i+n/i);
        }
    cout << ans;

    return 0;
}
