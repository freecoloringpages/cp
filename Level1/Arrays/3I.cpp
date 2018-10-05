#include <bits/stdc++.h>
using namespace std;
const int oo=100005;
int a[1005];
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int n; cin >> n;
    int mi=oo;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        mi=min(mi,a[i]);
    }
    int cnt=0;
    for (int i=1; i<=n; i++)
        if (a[i]==mi) cnt++;

    if (cnt%2==0) cout << "Unlucky";
    else cout << "Lucky";
    return 0;
}
