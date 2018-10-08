#include <bits/stdc++.h>
using namespace std;

const int maxN=1005;
const int oo=1000005;

int n,m; int a[maxN][maxN], b[maxN][maxN], c[maxN][maxN];
void input(){
    cin >> n >> m;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            cin >> a[i][j];
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            cin >> b[i][j];
}
//Using recursion
void matrixAddition(){
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            c[i][j]=a[i][j]+b[i][j];
}

void print(){
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }

}

int main()
{
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);

    input();
    matrixAddition();
    print();

    return 0;
}
