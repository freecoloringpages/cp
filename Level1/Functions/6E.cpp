#include <bits/stdc++.h>
using namespace std;
const int maxN=100005;

bool isPrime(int n){
    bool flag=true;
    if (n<=1) flag=false;
    for (int i=2; i<=round(sqrt(n)); i++)
    if (n%i==0){
        flag=false;
        break;
    }
    return flag;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int t; cin >> t;
    while(t>0){
        int n; cin >> n;
        if (isPrime(n)) cout << "YES";
        else cout << "NO";
        cout << endl;
        t--;
    }
    return 0;
}
