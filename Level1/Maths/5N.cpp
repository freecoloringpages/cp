#include <bits/stdc++.h>
using namespace std;

#define sqr(x) x*x

const double pi=3.14159;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    long long a,b; cin >> a >> b;

//    int n=a,m=b;
//    while(b){
//        a=a%b;
//        swap(a,b);
//    }
//    long long gcd = a;
    long long lcm = abs(a*b)/__gcd(a,b);
    cout << lcm;

    return 0;
}
