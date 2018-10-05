#include <bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    string s; cin >> s;
    int sum=0;
    int n=s.length();
    for (int i=0; i<n; i++)
        sum+=s[i]-'0';
    cout << sum;
    return 0;
}
