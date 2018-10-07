#include <bits/stdc++.h>
using namespace std;
const int maxN=100005;

void swapint(int* x, int* y){
    int t = *x;
    *x=*y;
    *y=t;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int a,b; cin >> a >> b;
    swapint(&a,&b);
    cout << a << " " << b;

    return 0;
}
