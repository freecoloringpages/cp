//CF.A.38. Pangram
//(http://codeforces.com/contest/520/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const long long oo=1000000005;

int n;
string t,s="";
void in(){
    cin >> n >> t;
    for (int i=0; i<n; i++){
        char c = tolower(t[i]);
        s=s+c;
    }
}

bool chk[26];
void sol(){
    for (int i=0; i<n; i++){
        int x = s[i]-'a';
        if (!chk[x]) chk[x]=true;
    }
    bool ans=true;
    for (int i=0; i<26; i++)
    if (!chk[i]){
        ans=false;
        break;
    }
    if (ans) cout << "YES";
    else cout << "NO";
}
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    in();
    sol();

    return 0;
}



