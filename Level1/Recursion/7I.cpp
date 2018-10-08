#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

//Using recursion

long long fib(int n){
    if (n<1) return 0;
    else if (n==1) return 1;
    else return fib(n-1)+fib(n-2);
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int n; cin >> n;
    cout << fib(n) << endl;

    return 0;
}
