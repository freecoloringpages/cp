//CF.A.32. Mahmoud and Longest Uncommon Subsequence
//(http://codeforces.com/contest/766/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

string s,t;
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    cin >> s >> t;
    if (s==t) cout << -1;
    else cout << max(s.length(), t.length());

    return 0;
}
