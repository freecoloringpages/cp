#include <bits/stdc++.h>
using namespace std;

const int maxN=105;
const int oo=1000005;

int n,m,a[maxN];

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    cin >> m;
    for (int i=0; i<m; i++){
        int x,y; cin >> x >> y;
        a[x-1]+=(y-1);
        a[x+1]+=a[x]-y;
        a[x]=0;
    }

    for (int i=1; i<=n; i++)
        cout << a[i] << endl;

    return 0;
}
