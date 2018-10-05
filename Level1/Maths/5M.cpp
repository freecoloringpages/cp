#include <bits/stdc++.h>
using namespace std;

#define sqr(x) x*x

const double pi=3.14159;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    long long a,b; cin >> a >> b;
    while(b){
        a=a%b;
        swap(a,b);
    }
    cout << a;

    return 0;
}
