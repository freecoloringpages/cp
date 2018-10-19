//CF-A. 58. Good Number
//(http://codeforces.com/contest/365/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=305;
const long long oo=1000000005;

int n,k;
void in(){
    cin >> n >> k;
}

bool goodNum(int n, int k){
    int ck[10]={0};
    while(n>0){
        int r=n%10;
        ck[r]++;
        n/=10;
    }
    bool flag=true;
    for (int i=0; i<=k; i++)
        if (ck[i]==0){
            flag=false;
            break;
        }
    return flag;
}

void sol(){
    int ans=0;
    for (int i=0; i<n; i++){
        int t; cin >> t;
        if (goodNum(t,k)) ans++;
    }
    cout << ans;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    in();
    sol();
    return 0;
}



