//CF.A.39. Twins
//(http://codeforces.com/contest/160/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const long long oo=1000000005;

int n, a[maxN];
long long sum=0;
void in(){
    cin >> n;
    for (int i=0; i<=n; i++){
        cin >> a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    //For testing only
    //for (int i=0; i<n; i++) cout << a[i] << " ";
}

void sol(){
    int ans=0, left=0, i=n-1;
    while(left<=sum-left){
        left+=a[i];
        ans++;
        i--;
    }
    cout << ans << endl;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    in();
    sol();

    return 0;
}



