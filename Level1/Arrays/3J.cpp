#include <bits/stdc++.h>
using namespace std;
const int oo=100005;
char a[1000005];
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int n; cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    int s=0;
    for (int i=1; i<=n; i++){
        int x = a[i]-'0';
        s+=x;
    }
    cout << s;
    return 0;
}
