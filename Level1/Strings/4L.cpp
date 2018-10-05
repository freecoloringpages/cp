#include <bits/stdc++.h>
using namespace std;
const int oo=0;
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int t; cin >> t;
    while (t>0){
        string s;
        cin >> s;
        int n=s.length();
        bool flag=false;
        for (int i=0; i<n-2; i++){
            if ((s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')||(s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')){
                flag=true; break;
            }
        }
        if (flag) cout << "Good";
        else cout << "Bad";
        cout << endl;
        t--;
    }

    return 0;
}
