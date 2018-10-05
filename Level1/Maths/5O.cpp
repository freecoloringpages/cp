#include <bits/stdc++.h>
using namespace std;

#define sqr(x) x*x

const double pi=3.14159;

int a[1005][1005], b[1005][1005], c[1005][1005];
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    int n,m,nn,p;
    cin >> n >> m;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            cin >> a[i][j];

    cin >> nn >> p;
    for (int i=1; i<=nn; i++)
        for (int j=1; j<=p; j++)
            cin >> b[i][j];

    for (int i=1; i<=n; i++)
        for (int j=1; j<=p; j++)
            for (int k=1; k<=m; k++)
                c[i][j]+=a[i][k]*b[k][j];

    for (int i=1; i<=n; i++){
        for (int j=1; j<=p; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }


    return 0;
}
