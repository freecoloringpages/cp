//CF-A. 57. Counterexample
//(http://codeforces.com/contest/483/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=305;
const long long oo=1000000005;

long long l,r;

void in(){
    cin >> l >> r;
    if (l%2==0){
        if (r-l<2) cout << -1;
        else cout << l << " " << l+1 << " " << l+2 << endl;
    }
    else if (r-l<=2) cout << -1;
    else cout << l+1 << " " << l+2 << " " << l+3 << endl;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    in();

    return 0;
}



