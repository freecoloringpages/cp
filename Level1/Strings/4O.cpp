#include <bits/stdc++.h>
using namespace std;
const int oo=0;
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    string s; cin >> s;
    int n=s.length();
    for (int i=0; i<n; i++){
        if (s[i]>='a' && s[i]<='z') s[i]=char(s[i]-32);
        else if (s[i]>='A' && s[i]<='Z') s[i]=char(s[i]+32);
    }
    cout << s << endl;
    return 0;
}
