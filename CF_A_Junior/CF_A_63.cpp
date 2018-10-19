//CF-A. 63. Chewbaсca and Number
//(http://codeforces.com/contest/514/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=305;
const long long oo=1000000005;

string s;
void sol2(){
    cin >> s;
    int n=s.length();
    for (int i=1; i<n; i++){
            int x = s[i]-'0';
            int d=9-x;
            char dc=char(int('0')+d);
            if (d<x) s[i]=dc;
    }
    if (s[0]!='9'){
        int x=s[0]-'0';
        int d=9-x;
        char dc=char(int('0')+d);
        if (d<x) s[0]=dc;
    }
    cout << s;
}
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    sol2();
    return 0;
}
