//CF-A. 53. Calculating Function
//(http://codeforces.com/contest/486/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=305;
const long long oo=1000000005;

long long n;
long long ans=0;
void in(){
    cin >> n;
    if (n%2==0) cout << n/2;
    else cout << n/2-n;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    in();
    return 0;
}



