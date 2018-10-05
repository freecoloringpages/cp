#include <bits/stdc++.h>
using namespace std;

long long a[100005];
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    long long n,x; cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=n-1; i>=0; i--) cout << a[i] << " ";
    return 0;
}
