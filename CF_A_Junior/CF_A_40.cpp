//CF.A.40. Keyboard
//(http://codeforces.com/contest/474/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const long long oo=1000000005;

string key1="qwertyuiop", key2="asdfghjkl;", key3="zxcvbnm,./";
char direction;
string s;

void in(){
    cin >> direction;
    cin >> s;
}

char findLeft(char c){
    char left;
    for (int i=0; i<10; i++)
    if (key1[i]==c){
        if (i>0)
            left=key1[i-1];
        if (i==0)
            left='*';
    }
    for (int i=0; i<10; i++)
    if (key2[i]==c){
        if (i>0)
            left=key2[i-1];
        if (i==0)
            left='*';
    }
    for (int i=0; i<10; i++)
    if (key3[i]==c){
        if (i>0)
            left=key3[i-1];
        if (i==0)
            left='*';
    }
    return left;
}

char findRight(char c){
    char right;
    for (int i=0; i<10; i++)
    if (key1[i]==c){
        if (i<9)
            right=key1[i+1];
        if (i==9)
            right='*';
    }
    for (int i=0; i<10; i++)
    if (key2[i]==c){
        if (i<9)
            right=key2[i+1];
        if (i==9)
            right='*';
    }
    for (int i=0; i<10; i++)
    if (key3[i]==c){
        if (i<9)
            right=key3[i+1];
        if (i==9)
            right='*';
    }
    return right;
}

void sol(){
    string ans="";
    int n = s.length();
    if (direction=='R'){
        for (int i=0; i<n; i++){
            char c = findLeft(s[i]);
            if (c!='*')
                ans+=c;
        }
    }
    else{
        for (int i=0; i<n; i++){
            char c = findRight(s[i]);
            if (c!='*')
                ans+=c;
        }
    }
    cout << ans;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    in();
    sol();
    return 0;
}



