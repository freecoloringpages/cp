#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

int k,r;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    cin >> k >> r;
    int x=0;
    while(true){
        x++;
        if (x*k%10==r || x*k%10==0)
            break;
    }
    cout << x;

    return 0;
}
