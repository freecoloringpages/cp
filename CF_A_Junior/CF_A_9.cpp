//http://codeforces.com/contest/791/problem/A
#include <bits/stdc++.h>
using namespace std;

const int maxN=105;
const int oo=1000005;

string s;

void input(){
    getline(cin,s);
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

string toUp(string s){
    string t="";
    for (int i=0; i<s.length(); i++)
    {
        char c=toupper(s[i]);
        t+=c;
    }
    return t;
}

string sol(string s){
    int Low=0, Up=0;
    for (int i=0; i<s.length(); i++){
        if (s[i]>='a' && s[i]<='z') Low++;
        else if (s[i]>='A' && s[i]<='Z') Up++;
    }
    if (Low>=Up) return toLow(s);
    else return toUp(s);
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    cout << sol(s);

    return 0;
}
