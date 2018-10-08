#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

long long gcd(int a, int b){
    if (a==b) return a;
    if (a==0 || b==0) return a+b;
    else {
        if (a<b) return gcd(a,b-a);
        else return gcd(a-b,b);
    }
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int x,y; cin >> x >> y;
    cout << gcd(x,y);

    return 0;
}
