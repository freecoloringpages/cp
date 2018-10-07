#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

int a[35][35]={0};

void pascalTriangle(int n){
    for (int i=1; i<=n+1; i++)
    {
        a[i][1]=1;
        a[i][i]=1;
    }
    for (int i=3; i<=n+1; i++){
        for (int j=2; j<i; j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int n; cin >> n;
    pascalTriangle(n);
    for (int i=1; i<=n+1; i++){
        for (int j=1; j<=i; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}
