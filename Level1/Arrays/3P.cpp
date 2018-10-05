#include <bits/stdc++.h>
using namespace std;

const int oo=100005;

long long f[100];

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    int n; cin >> n;
    f[1]=0; f[2]=1;
    for (int i=3; i<=n; i++)
        f[i]=f[i-1]+f[i-2];
    cout << f[n];

    return 0;
}
