//http://codeforces.com/contest/734/problem/A
#include <bits/stdc++.h>
using namespace std;

const int maxN=1005;
const int oo=1000005;

string s;
int n;

void input(){
    cin >> n;
    cin >> s;
}

void sol(){
    int A=0; int D=0;
    for (int i=0; i<n; i++){
        if (s[i]=='A') A++;
        else if (s[i]=='D') D++;
    }

    if (A>D) cout << "Anton";
    else if (A<D) cout << "Danik";
    else cout << "Friendship";
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();

    sol();

    return 0;
}
