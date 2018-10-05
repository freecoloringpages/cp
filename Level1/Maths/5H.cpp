#include <bits/stdc++.h>
using namespace std;

#define sqr(x) x*x

const double pi=3.14159;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int t; cin >> t;
    while (t>0){
        int x,y; cin >> x >> y;
        int ans=0;
        if (x>y) swap(x,y);
        if (x%2==0)
            for (int i=x+1; i<y; i+=2) ans+=i;
        else
            for (int i=x+2; i<y; i+=2) ans+=i;
        cout << ans << endl;
        t--;
    }
    return 0;
}
