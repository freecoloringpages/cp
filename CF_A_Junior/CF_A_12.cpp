#include <bits/stdc++.h>
using namespace std;

const int maxN=105;
const int oo=1000005;

int n;
string s;
void input(){
    cin >> n;
    cin >> s;
}

int sol(string s){
    int ans=0;
    for (int i=0; i<n; i++){
        if ((s[i]=='R' && s[i+1]=='R')||(s[i]=='G' && s[i+1]=='G')||(s[i]=='B' && s[i+1]=='B')) ans++;
    }
    return ans;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    cout << sol(s);

    return 0;
}
