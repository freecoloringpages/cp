#include <bits/stdc++.h>
using namespace std;

long long a[100005];
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    long long n,x; cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    cin >> x;
    for (int i=0; i<n; i++){
        if (a[i]==x){
            cout << i ;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
