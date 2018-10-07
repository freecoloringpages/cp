#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;

bool isOdd(int x){
    if (x%2==0) return false;
    else return true;
}

bool isPal(int n){
    vector<int> a;
    while (n>0){
        a.push_back(n%2);
        n/=2;
    }

    int nn=a.size();
    bool flag=true;
    for (int i=0; i<nn/2; i++)
        if (a[i]!=a[nn-i-1]){
            flag=false;
            break;
        }
    return flag;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int n; cin >> n;
    if (isOdd(n) && isPal(n)) cout << "YES";
    else cout << "NO";

    return 0;
}
