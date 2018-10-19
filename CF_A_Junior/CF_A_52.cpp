//CF-A. 52. Arpa's hard exam and Mehrdad's naive cheat
//(http://codeforces.com/contest/742/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=305;
const long long oo=1000000005;

int n;

void in(){
    cin >> n; long long t=1;
    if (n==0) cout << 1;
    else {
        if (n%4==1) cout << 8;
        if (n%4==2) cout << 4;
        if (n%4==3) cout << 2;
        if (n%4==0) cout << 6;
    }
}
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    in();
    return 0;
}



