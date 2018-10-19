#include <bits/stdc++.h>
using namespace std;

const int maxN=105;
const int oo=1000005;

int x,y;

int ucln(int x, int y){
    if (x==0 || y==0) return x+y;
    else ucln(y, x%y);
}

void phanso(int a, int b){
    int t=ucln(a,b);
    cout << a/t << "/" << b/t;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    cin >> x >> y;
    x=max(x,y);
    int a=6-x+1;
    int b=6;
    phanso(a,b);

    return 0;
}
