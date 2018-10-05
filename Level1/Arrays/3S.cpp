#include <bits/stdc++.h>
using namespace std;

const int oo=100005;
int a[1005][1005];
int x;
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    int n,m; cin >> n >> m;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            cin >> a[i][j];
    cin >> x;
    bool ok=false;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            if (a[i][j]==x){
                ok=true;
                break;
            }
    if (ok) cout << "will not take number";
    else cout << "will take number";
    return 0;
}
