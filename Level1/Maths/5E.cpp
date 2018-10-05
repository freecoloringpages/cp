#include <bits/stdc++.h>
using namespace std;

#define sqr(x) x*x

const double pi=3.14159;
int a[105][105], b[105][105], cc[105][105];
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int r,c; cin >> r >> c;
    for (int i=1; i<=r; i++)
        for (int j=1;j<=c; j++)
            cin >> a[i][j];
    for (int i=1; i<=r; i++)
        for (int j=1;j<=c; j++)
            cin >> b[i][j];
    for (int i=1; i<=r; i++)
        for (int j=1;j<=c; j++)
            cc[i][j]=a[i][j]+b[i][j];
    for (int i=1; i<=r; i++){
        for (int j=1;j<=c; j++)
            cout << cc[i][j] << " ";
        cout << endl;
    }

    return 0;
}
