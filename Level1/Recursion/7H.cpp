#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

//Using recursion
bool isVowel(char c){
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
    else return false;
}

string stringToLower(string s){
    string t="";
    for (int i=0; i<s.length(); i++)
        t+=tolower(s[i]);
    return t;
}

int cnt=0;
int countVowels(string s,int i, int j){
    if (i>j) return cnt;
    else{
        if (isVowel(s[i])){
            return 1+countVowels(s,i+1,j);
        }
        else return countVowels(s,i+1,j);
    }
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    string s;
    getline(cin,s);
    s=stringToLower(s);
    cout << countVowels(s,0,s.length());

    return 0;
}
