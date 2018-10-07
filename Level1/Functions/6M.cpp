#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

long long factorial(int n){
    long long ans=1;
    for (int i=2; i<=n; i++)
        ans*=i;
    return ans;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int n; cin >> n;
    cout << factorial(n);

    return 0;
}
