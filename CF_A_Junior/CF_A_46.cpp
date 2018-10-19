//CF-A. 46. Translation
//(http://codeforces.com/contest/41/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const long long oo=1000000005;

string code, birland;
void in(){
    cin >> code;
    cin >> birland;
}

void sol(){
    string t="";
    int n=code.length();
    for (int i=n-1; i>=0; i--){
        t+=code[i];
    }
    if (birland==t) cout << "YES";
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



