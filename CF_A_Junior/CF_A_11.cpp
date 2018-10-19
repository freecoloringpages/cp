//http://codeforces.com/contest/791/problem/A
#include <bits/stdc++.h>
using namespace std;

const int maxN=105;
const int oo=1000005;

int n;
string s;
void input(){
    cin >> n;
    s="";
    for (int i=0; i<n; i++)
    {
        string t; cin >> t;
        s+=t;
    }
    //cout << s;
}

int sol(string s){
    int ans=0;
    for (int i=0; i<s.length(); i++)
        if ((s[i]=='0' && s[i+1]=='0')||(s[i]=='1' && s[i+1]=='1')) ans++;
    return ans+1;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    cout << sol(s);

    return 0;
}
