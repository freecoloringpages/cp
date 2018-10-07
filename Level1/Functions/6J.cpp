#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

string DecToBinary(long long n){
    string s="";
    if (n==0) return "0";
    while (n>0){
        int r=n%2;
        if (r==0) s=s+"0";
        else s=s+"1";
        n/=2;
    }
    string t="";
    for (int i=s.length()-1; i>=0; i--)
        t=t+s[i];
    return t;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    long long n; cin >> n;
    cout << DecToBinary(n);

    return 0;
}
