#include <bits/stdc++.h>
using namespace std;

long long a[1005];
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int t; cin >> t;
    while (t>0){
        int n; cin >> n;
        long long mi=1000005;
        for (int i=1; i<=n; i++) cin >> a[i];
        for (int i=1; i<=n; i++)
            for (int j=i+1; j<=n; j++){
                long long t = a[i]+a[j];
                if (t<mi) mi=t;

            }
        cout << mi << endl;
        t--;
    }

    return 0;
}
