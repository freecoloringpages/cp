#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;

void print(int n){
    for (int i=1; i<=n; i++)
        if (i<n)
            cout << i << " ";
        else cout << i;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int a; cin >> a;
    print(a);

    return 0;
}
