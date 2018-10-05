#include <bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int tt; cin >> tt;
    while (tt>0){
        string s,t;
        cin >> s >> t;
        int n=s.length();
        int m=t.length();

        int mi=min(n,m); int ma=max(n,m);
        int i=0;
        while(i<mi){
            cout << s[i] << t[i];
            i++;
        }
        while (i<ma){
            if (n<m) cout << t[i];
            else if (n>m) cout << s[i];
            i++;
        }
        cout << endl;

        tt--;
    }

    return 0;
}
