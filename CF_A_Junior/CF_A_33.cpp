//CF.A.33. Snacktower
//(http://codeforces.com/problemset/problem/767/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

int n, a[maxN];
bool vis[maxN]={false};

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    cin >> n;
    int top=n;
    for (int i=1; i<=n; i++){
        int x; cin >> x;
        if (x!=top){
            cout << endl;
            vis[x]=true;
        }
        else {
            cout << x << " ";
            top--;
            while(vis[top]){
                cout << top << " ";
                top--;
            }
            cout << endl;
        }
    }

    return 0;
}
