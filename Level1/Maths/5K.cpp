#include <bits/stdc++.h>
using namespace std;

#define sqr(x) x*x

const double pi=3.14159;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    long long n; cin >> n;
    bool flag=true;
    if (n==2) flag=true;
    if (n==1) flag=false;
    for (int i=2; i<=round(sqrt(n)); i++){
        if (n%i==0){
            flag=false;
            break;
        }
    }
    if (flag) cout << "YES";
    else cout << "NO";


    return 0;
}
