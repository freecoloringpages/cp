//http://codeforces.com/contest/791/problem/A
#include <bits/stdc++.h>
using namespace std;

const int maxN=105;
const int oo=1000005;

string s1, s2;

void input(){
    getline(cin,s1);
    getline(cin,s2);
}

string toLow(string s){
    string t="";
    for (int i=0; i<s.length(); i++)
    {
        char c=tolower(s[i]);
        t+=c;
    }
    return t;
}

void sol(){
    s1=toLow(s1);
    s2=toLow(s2);
    if (s1>s2) cout << 1;
    else if (s1==s2) cout << 0;
    else cout << -1;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    sol();

    return 0;
}
