#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

int a[maxN];

int findMax(int a[],int n){
    if (n==1) return a[0];
    else return max(a[n-1],findMax(a,n-1));
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int n; cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    cout << findMax(a,n);

    return 0;
}
