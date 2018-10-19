//CF-A. 61. Mountain Scenery
//(http://codeforces.com/contest/218/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=305;
const long long oo=1000000005;

int n,k;
int a[maxN];
void sol(){
    cin >> n >> k;
    for (int i=1; i<=2*n+1; i++){
        cin >> a[i];
    }
    int ans=0;
    for (int i=1; i<=2*n+1; i++){
        if (i%2==0 && a[i]-1>a[i-1] && a[i]-1>a[i+1]){
            ans++;
            a[i]=a[i]-1;
        }
        if (ans==k) break;
    }
    for (int i=1; i<=2*n+1; i++)
        cout << a[i] << " ";

}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    sol();
    return 0;
}



