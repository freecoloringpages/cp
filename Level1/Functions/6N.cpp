#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

void printShape(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++)
            cout << "*";
        cout << endl;
    }
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int n; cin >> n;
    printShape(n);

    return 0;
}
