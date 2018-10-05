#include <bits/stdc++.h>
using namespace std;

const int oo=100005;

int a[1005];
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    int n; cin >> n;
    int mi=oo,ma=-oo,idmin, idmax;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        if (mi>a[i]){
            mi=a[i]; idmin=i;
        }
        if (ma<a[i]){
            ma=a[i];
            idmax=i;
        }
    }
    swap(a[idmin],a[idmax]);
    for (int i=1; i<=n; i++) cout << a[i] << " ";


    return 0;
}
