#include <bits/stdc++.h>
using namespace std;

const int oo=100005;

int a[105];

bool chk(int x, int a[], int n){
    for (int i=1; i<=n; i++)
        if (a[i]==x) return true;
    return false;
}

int main()
{
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);

    int t; cin >> t;
    while (t>0){
        int n; cin >> n;
        for (int i=1; i<=n; i++) cin >> a[i];
        bool flag = true;
        for (int i=1; i<=n; i++){
            for (int j=i+1; j<=n; j++){
                int x = a[i]*a[j];
                if (chk(x,a,n)) continue;
            }
        }
        if (flag) cout << "yes" << endl;
        else cout << "no" << endl;
        t--;
    }

    return 0;
}
