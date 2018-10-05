#include <bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    string s; cin >> s;
    int one=0, zero=0;
    for (int i=0; i<s.length(); i++)
        if (s[i]=='0') zero++;
    else one++;
    cout << abs(one-zero);

    return 0;
}
