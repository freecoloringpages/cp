//CF.A.35. Next Round
//(http://codeforces.com/contest/158/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const long long oo=1000000005;

int n, k, a[maxN];
void in(){
    cin >> n >> k;
    for (int i=1; i<=n; i++)
        cin >> a[i];
}

void sol(){
    if (a[k]==0) {
        int i=k-1; int cnt=0;
        while (a[i]==0 & i>=1){
            cnt++;
            i--;
        }
        if (k-cnt-1>0)
            cout << k-cnt-1;
        else cout << 0;
    }
    else{
        int t=a[k];
        int i=k+1, cnt=0;
        while (a[i]==a[k] && i<=n) {
            cnt++;
            i++;
        }
        cout << k+cnt;
    }
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    in();
    sol();

    return 0;
}



