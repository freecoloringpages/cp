//http://codeforces.com/contest/791/problem/A
#include <bits/stdc++.h>
using namespace std;

const int maxN=1005;
const int oo=1000005;

int n, a[maxN][3], ans=0;

void input(){
    cin >> n;
    for (int i=0; i<n; i++)
        for (int j=0; j<3; j++)
            cin >> a[i][j];
}

void sol(){
    for (int i=0; i<n; i++){
        int cnt=0;
        for (int j=0; j<3; j++)
            if(a[i][j]==1) cnt++;
        if (cnt>=2) ans++;
    }
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    sol();
    cout << ans;
    return 0;
}
