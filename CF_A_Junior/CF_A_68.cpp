//CF-A. 68. Yaroslav and Permutations
//(http://codeforces.com/contest/296/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=105;
const long long oo=1000000005;

int n, a[maxN], dd[1005]={0};
void sol(){
    cin >> n;
    int ma=-oo;
    for (int i=0; i<n; i++){
        cin >> a[i];
        dd[a[i]]++;
        ma=max(dd[a[i]],ma);
    }
    //cout << ma << endl;
    if (ma<=((n+1)/2)) cout << "YES";
    else cout << "NO";
    //cout << ma;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    sol();
    return 0;
}
