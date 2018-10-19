//CF.A.34. Oath of the Night's Watch
//(http://codeforces.com/contest/768/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

int n, a[maxN];
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    cin >> n;
    int mi=oo, ma=-oo;
    for (int i=0; i<n; i++){
        cin >> a[i];
        mi=min(mi,a[i]);
        ma=max(ma,a[i]);
    }
    int cma=0, cmi=0;
    for (int i=0; i<n; i++){
        if (a[i]==mi) cmi++;
        if (a[i]==ma) cma++;
    }
    if (ma==mi) cout << 0;
    else cout << n-cma-cmi;

    return 0;
}



