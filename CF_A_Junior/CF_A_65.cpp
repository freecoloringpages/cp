//CF-A. 65. Launch of Collider
//(http://codeforces.com/contest/699/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=200005;
const long long oo=1000000005;

int n, a[maxN];
string s;
void in(){
    cin >> n;
    cin >> s;
    for (int i=0; i<n; i++) cin >> a[i];
}

void sol(){
    int m = s.length();
    int ans=oo;
    for (int i=0; i<m; i++){
        if (s[i]=='R'){
            for (int j=i+1; j<m; j++)
                if (s[j]=='L'){
                    int d = a[j]-a[i];
                    ans=min(ans,d);
                    break;
                }
        }
    }
    if (ans==oo) cout << -1;
    else
        cout << ans/2;
//Time limit at test 47
}

void sol1(){
    int m=s.length();
    int ans=oo;
    for (int i=0; i<m; i++){
        if (s[i]=='R' && s[i+1]=='L') ans=min(ans,a[i+1]-a[i]);
    }
    if (ans==oo) cout << -1;
    else cout << ans/2;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    in();
    sol1();
    return 0;
}
