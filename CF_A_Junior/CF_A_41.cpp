//CF.A.41. Even Odds
//(http://codeforces.com/contest/318/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const long long oo=1000000005;

long long n,k;
void sol(){
    cin >> n >> k;
    if (n%2==0){
        if (k<=n/2) cout << 2*k-1;
        else{
            cout << 2*(k-n/2);
        }
    }
    else{
        if (k<=n/2+1) cout << k*2-1;
        else cout << (k-n/2-1)*2;
    }
}
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    sol();

    return 0;
}



