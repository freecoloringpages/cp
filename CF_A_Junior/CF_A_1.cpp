//http://codeforces.com/contest/677/problem/A
#include <bits/stdc++.h>
using namespace std;

const int maxN=1005;
const int oo=1000005;

int n, h, a[maxN];

void input(){
    cin >> n >> h;
    for (int i=0; i<n; i++) cin >> a[i];
}

void sol(int &ans){
    for (int i=0; i<n; i++){
        if (a[i]<=h) ans++;
        else ans+=2;
    }
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    int ans=0;
    sol(ans);
    cout << ans;

    return 0;
}
