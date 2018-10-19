//CF-A. 54. Theatre Square
//(http://codeforces.com/contest/1/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=305;
const long long oo=1000000005;

long long n,m,a;
void in(){
    cin >> n >> m >> a;
    long long nn,mm;
    if (n%a==0) nn=n/a;
    else nn=n/a+1;
    if (m%a==0) mm=m/a;
    else mm=m/a+1;
    cout << nn*mm << endl;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    in();
    return 0;
}



