//CF.A.42. I Wanna Be the Guy
//(http://codeforces.com/contest/469/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const long long oo=1000000005;

int n,p,q;
void sol(){
    cin >> n >> p;
    vector<bool> vis(n+1,false);
    for (int i=1; i<=p; i++) {
        int x; cin >> x;
        if (!vis[x]) vis[x]=true;
    }
    cin >> q;
    for (int i=1; i<=q; i++){
        int y; cin >> y;
        if (!vis[y]) vis[y]=true;
    }

    bool ok=true;
    for (int i=1; i<=n; i++)
        if (!vis[i]){
            ok=false;
            break;
        }
    if (ok) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    sol();

    return 0;
}



