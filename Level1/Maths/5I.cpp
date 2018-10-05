#include <bits/stdc++.h>
using namespace std;

#define sqr(x) x*x

const double pi=3.14159;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    while(true){
        int n,m; cin >> n >> m;
        if (n<=0 || m<=0) break;
        if (n>m) swap(n,m);
        int sum=0;
        for (int i=n; i<=m; i++){
            sum+=i;
            cout << i << " ";
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}
