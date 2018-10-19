#include <bits/stdc++.h>
using namespace std;

const int maxN=1005;
const int oo=1000005;

long long n,x;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    cin >> n >> x;
    long long child=0;

    for (int i=0; i<n; i++){
        char c; int d;
        cin >> c >> d;
        if (c=='+')
            x+=d;
        else {
            if (x<d) child++;
            else x-=d;
        }
    }
    cout << x << " " << child;

    return 0;
}
