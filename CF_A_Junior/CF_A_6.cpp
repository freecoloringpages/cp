//http://codeforces.com/contest/791/problem/A
#include <bits/stdc++.h>
using namespace std;

const int maxN=105;
const int oo=1000005;

int n, a[maxN];

void input(){
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
}

int sol(){
    for (int i=0; i<n; i++)
        for (int j=0; j<i; j++)
            if (a[j]>a[i]) swap(a[i],a[j]);
    for (int i=0; i<n; i++) cout << a[i] << " ";
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    sol();

    return 0;
}
