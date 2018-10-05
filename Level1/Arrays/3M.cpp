#include <bits/stdc++.h>
using namespace std;

const int oo=100005;

int a[100005];
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int n; cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    int ma=-oo;
    for (int i=2; i<=n; i++){
        int diff=abs(a[i]-a[i-1]);
        ma=max(ma,diff);
    }
    cout << ma << endl;

    return 0;
}
