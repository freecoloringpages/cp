//CF.A.29. New Password
//(http://codeforces.com/contest/770/problem/A)
#include <bits/stdc++.h>
using namespace std;

const int maxN=5005;
const int oo=1000005;

int n,k;
void genPass(int n, int k){
    int i=0, j=0;
    while(i<k && j<n){
        cout << char(int('a')+i);
        i++; j++;
        if (j%k==0)
            i=0;
    }
}
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    cin >> n >> k;
    genPass(n,k);

    return 0;
}
