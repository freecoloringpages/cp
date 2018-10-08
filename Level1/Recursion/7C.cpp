#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

long long fac(int n){
    if (n==1) return 1;
    else return n*fac(n-1);
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int n; cin >> n;
    cout << fac(n);
    return 0;
}
