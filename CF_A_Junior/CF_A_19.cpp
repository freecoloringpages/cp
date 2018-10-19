#include <bits/stdc++.h>
using namespace std;

const int maxN=105;
const int oo=1000005;

string s, t;
void input(){
    cin >> s >> t;
}

void sol(){
    int id=0; //Vi tri ban dau
    int n=s.length();
    int m=t.length();
    for (int i=0; i<m; i++)
        if (t[i]==s[id]) id++;
    cout << id+1;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    sol();

    return 0;
}
