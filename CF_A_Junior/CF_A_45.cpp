//CF-A. 45. String task
//(http://codeforces.com/contest/118/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const long long oo=1000000005;

string ss;
void in(){
    cin >> ss;
}
string strToLower(string s){
    string t="";
    int n=s.length();
    for (int i=0; i<n; i++){
        char c=tolower(s[i]);
        t+=c;
    }
    return t;
}

bool checkVowel(char c){
    if (c=='a' || c=='e' || c=='u' || c=='i' || c=='o' || c=='y') return true;
    else return false;
}

string removeVowels(string s){
    string t="";
    int n=s.length();
    for (int i=0; i<n; i++)
        if (!checkVowel(s[i]))
            t+=s[i];
    return t;
}

string addDot(string s){
    string t="";
    int n=s.length();
    for (int i=0; i<n; i++)
        t+="."+s[i];
    return t;
}

void sol(string s){
    string str = strToLower(s);
    str = removeVowels(str);
    int n=str.length();
    for (int i=0; i<n; i++)
        cout << "."<< str[i];
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    in();
    sol(ss);

    return 0;
}



