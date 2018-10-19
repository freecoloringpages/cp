//CF-A. 50. Dubstep
//(http://codeforces.com/contest/208/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const long long oo=1000000005;


void in(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
            s[i]=s[i+1]=s[i+2]='.';
    }
    string t="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='.') t+=s[i];
        if(s[i]!='.' && s[i+1]=='.') t+=' ';
    }
    cout << t << endl;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    in();

    return 0;
}



