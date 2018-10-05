#include <bits/stdc++.h>
using namespace std;

long long a[100005];
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int n; cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    for (int i=1; i<=n; i++)
        for (int j=i+1;j<=n; j++)
        if (a[i]>a[j]) swap(a[i],a[j]);
    for (int i=1; i<=n; i++) cout << a[i] << " ";

    return 0;
}
