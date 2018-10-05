#include <bits/stdc++.h>
using namespace std;

const double pi=3.14159;

long long f[100];
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int n; cin >> n;

    f[0]=0; f[1]=1;
    for (int i=2; i<n; i++)
        f[i]=f[i-1]+f[i-2];

    for (int i=0; i<n; i++)
        cout << f[i] << " ";

    return 0;
}
