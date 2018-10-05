#include <bits/stdc++.h>
using namespace std;

const int oo=100005;
int a[1005];
bool chk(int i, int j){
    bool ok=true;
    for (int k=i; k<j; k++)
    if (a[k]>a[k+1]){
        ok=false;
        break;
    }
    return ok;
}
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    int t; cin >> t;
    while (t>0){
        int n; cin >> n;
        for (int i=1; i<=n; i++)
            cin >> a[i];
        int cnt=0;
        for (int i=1; i<=n; i++){
            for (int j=i; j<=n; j++){
                if (chk(i,j)) cnt++;
            }
        }
        cout << cnt << endl;;
        t--;
    }

    return 0;
}
