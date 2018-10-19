//CF-A. 47. Case of the Zeros and Ones
//(http://codeforces.com/contest/556/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const long long oo=1000000005;

long long n;
string s;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    cin >> n;
    cin >> s;
    int zero=0, one=0;
    for (int i=0; i<n; i++)
        if (s[i]=='0') zero++;
        else one++;
    cout << abs(one-zero)<< endl;
    return 0;
}



