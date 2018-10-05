#include <bits/stdc++.h>
using namespace std;
const int oo=0;
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    string s; cin >> s;
    int n=s.length();
    bool flag=true;
    for (int i=0; i<n/2; i++){
        if (s[i] != s[n-i-1]){
            flag=false;
            break;
        }
    }
    if (flag) cout << "YES";
    else cout << "NO";
    return 0;
}
