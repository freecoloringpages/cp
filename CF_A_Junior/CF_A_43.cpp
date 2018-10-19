//CF-A. 43. Is it rated?
//(http://codeforces.com/contest/807/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const long long oo=1000000005;

int n, a[maxN], b[maxN];

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    cin >> n;
    bool flag=false;
    for (int i=1; i<=n; i++){
        cin >> a[i] >> b[i];
        if (a[i]!=b[i]) {
            cout << "rated" << endl;
            return 0;
        }
    }
    for (int i=1; i<n; i++)
        for (int j=i+1; j<=n; j++)
        if (a[i]<a[j]){
            cout << "unrated" << endl;
            return 0;
        }
    cout << "maybe";
}



