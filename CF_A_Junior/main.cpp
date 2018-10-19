//CF-A. 70. Snow Footprints
//(http://codeforces.com/contest/298/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=1005;
const long long oo=1000000005;

int n;
char a[maxN];

void sol(){
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    for (int i=1; i<=n; i++)
        if (a[i]=='.'){
            i++;
        }
    int cur = i;

}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    sol();
    return 0;
}
