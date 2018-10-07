#include <bits/stdc++.h>
using namespace std;
const int maxN=100005;

void sortA(int a[], int n){
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            if (a[i]>a[j]) swap(a[i],a[j]);
}
int aa[1005];
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int n; cin >> n;
    for (int i=0; i<n; i++) cin >> aa[i];
    sortA(aa,n);
    for (int i=0; i<n; i++) cout << aa[i] << " ";

    return 0;
}
