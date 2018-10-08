#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

int a[maxN];
//Combination using recursion: C(n,k)=C(n-1,k-1)+C(n-1,k)
long long combination(int n, int k){
    if (k==0||k==n) return 1;
    else return (combination(n-1,k-1)+combination(n-1,k));
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int nn,kk; cin >> nn >> kk;
    cout << combination(nn,kk);

    return 0;
}
