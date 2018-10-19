//http://codeforces.com/contest/791/problem/A
#include <bits/stdc++.h>
using namespace std;

const int maxN=105;
const int oo=1000005;

string s;

void input(){
    getline(cin,s);
}

string sol(string s){
    char c=toupper(s[0]);
    s[0]=c;
    return s;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    cout << sol(s);

    return 0;
}
