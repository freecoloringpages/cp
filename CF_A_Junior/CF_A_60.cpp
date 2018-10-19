//CF-A. 60. Alyona and Numbers
//(http://codeforces.com/contest/682/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=305;
const long long oo=1000000005;

int n,m;
void sol1(){ //Bruteforce
    cin >> n >> m; int ans=0;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++)
            if ((i+j)%5==0){
                cout << i << ":" << j << endl;
                ans++;
            }
    }
    cout << ans;
}

void sol2(){
    cin >> n >> m;
    int a[5]={0};
    for (int i=1; i<=m; i++){ //Dem so luong cac so x%5 cung so du
        int r = i%5;
        a[r]++;
    }
    long long ans=0;
    for (int i=1; i<=n; i++){
        int r=(5-i%5)%5;
        ans+=a[r];
    }
    cout << ans << endl;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    sol2();
    return 0;
}



