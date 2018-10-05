#include <bits/stdc++.h>
using namespace std;
const int oo=0;
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    string s; cin >> s;
    int n=s.length();
    int cnt=0;
    int ma=-oo;
    for (int i=0; i<n; i++)
        if (s[i]=='I') {
            cnt++;
            ma=max(ma,cnt);
        }
        else if (s[i]=='D') {
            cnt--;
            ma=max(ma,cnt);
        }
    cout << ma;

    return 0;
}
