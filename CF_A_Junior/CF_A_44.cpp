//CF-A. 44. Olesya and Rodion
//(http://codeforces.com/contest/584/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const long long oo=1000000005;

int n, t;
void in(){
    cin >> n >> t;
}

void sol(){
    if (t==10){
        if (n==1) cout << -1;
        else {
            for (int i=1; i<n; i++) cout << 1;
            cout << 0;
        }
    }
    else {
        for (int i=1; i<=n; i++) cout << t;
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



