//CF-A. 56. Panoramix's Prediction
//(http://codeforces.com/contest/80/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=305;
const long long oo=1000000005;

int n,m;
void in(){
    cin >> n >> m;
}

bool isPrime(int n){
    bool flag=true;
    for (int i=2; i<=sqrt(n); i++)
    if (n%i==0){
        flag=false;
        break;
    }
    return flag;
}

void sol(){
    if (!isPrime(m)) cout << "NO";
    else{
        int i=n+1;
        while (!isPrime(i)) i++;
        if (i==m) cout << "YES";
        else cout << "NO";
    }
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    in();
    sol();

    return 0;
}



