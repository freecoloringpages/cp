#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

//Using recursion
string s="";
void toBinary(int n){
    if (n==0) return;
    else{
        if (n%2==0) s+="0";
        else s+="1";
        toBinary(n/2);
    }
}

string revertStr(string ss){
    string t="";
    for (int i=ss.length()-1; i>=0; i--)
        t+=s[i];
        return t;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int t; cin >> t;
    while (t>0){
        int n; cin >> n;
        toBinary(n);
        s=revertStr(s);
        cout << s ;
        cout << endl;
        s="";
        t--;
    }
    return 0;
}
