#include <bits/stdc++.h>
using namespace std;

const int oo=100005;
int a[1005][1005];
int n;
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    cin >> n;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            cin >> a[i][j];

    long long chinh=0,phu=0;
    for (int i=1; i<=n; i++){
        chinh=chinh+a[i][i];
        phu=phu+a[i][n-i+1];
    }
    cout << abs(chinh-phu);
    return 0;
}
