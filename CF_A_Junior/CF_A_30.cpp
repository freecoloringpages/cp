////CF.A.30. Presents
//(http://codeforces.com/contest/136/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=5005;
const int oo=1000005;

int n;
int p[maxN];

void input(){
    cin >> n;
    for (int i=1; i<=n; i++){
        int x; cin >> x;
        p[x]=i;
    }
    for (int i=1; i<=n; i++) cout << p[i] << " ";
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();

    return 0;
}
