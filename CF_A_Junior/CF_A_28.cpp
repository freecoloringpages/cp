//CF.A.28. Team Olympiad
//(http://codeforces.com/contest/490/problem/A)
#include <bits/stdc++.h>
using namespace std;

const int maxN=5005;
const int oo=1000005;

int n, ans=oo;
vector<int> a[4];

void sol(){
    cin >> n;
    for (int i=1; i<=n; i++){
        int x; cin >> x;
        a[x].push_back(i);
    }

    for (int i=1; i<=3; i++){
        int s = a[i].size();
        ans=min(ans,s);
    }

    cout << ans << endl;

    int b[ans][4];
    for (int i=1; i<=3; i++){
        for (int j=0; j<ans; j++)
            b[j][i]=a[i][j];
    }
    for (int j=0; j<ans; j++){
        for (int i=1; i<=3; i++)
            cout << b[j][i] << " ";
        cout << endl;
    }
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    sol();

    return 0;
}
