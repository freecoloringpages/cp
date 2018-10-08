#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

int n;
void print(int i, int j){
    if (i>j) return;
    else {
        if (i<n){
            cout << i << endl;
            print(i+1,j);
        }
        else cout << i;
    }
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    cin >> n;
    print(1,n);

    return 0;
}
