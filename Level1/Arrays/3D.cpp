#include <bits/stdc++.h>
using namespace std;

int a[1000005];
int main()
{
    //freopen("input.inp","r",stdin);
    //freopen("output.out","w",stdout);

    int n; cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    int mi=100005, id;
    for (int i=1; i<=n; i++){
        if (a[i]<mi) {
            mi=a[i];
            id=i;
        }
    }
    cout << mi << " " << id;
    return 0;
}
