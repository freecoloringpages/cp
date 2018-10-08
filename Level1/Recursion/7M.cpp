#include <bits/stdc++.h>
using namespace std;

const int maxN=1005;
const int oo=1000005;

int a[maxN]; int n;
void input(){
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
}

long long ans=0;

long long sol(int i, int j){
    if (i==j) return ans+a[i];
    else return ans+a[i]+sol(i+1,j);
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    cout << sol(0,n-1);

    return 0;
}
