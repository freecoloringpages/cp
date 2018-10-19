//CF-A. 66. Polo the Penguin and Segments
//(http://codeforces.com/contest/289/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const long long oo=1000000005;

int n,k, l[maxN], r[maxN];
void sol(){
    cin >> n >> k;
    int p=0;
    for (int i=0; i<n; i++){
        cin >> l[i] >> r[i];
        p+=r[i]-l[i]+1;
    }
    if (p%k==0) cout << 0;
    else {
        int ans=0;
        int r = p%k;
        cout << k-r;
    }
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    sol();
    return 0;
}
