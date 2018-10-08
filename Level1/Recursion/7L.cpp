#include <bits/stdc++.h>
using namespace std;

const int maxN=1005;
const int oo=1000005;

int a[maxN]; int n;
void input(){
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
}

void sol(){
    for (int i=n-1; i>=0; i--){
        if (i%2==0) cout << a[i] << " ";
    }
}

void solRecursively(int i, int j){
    if (i>j) return;
    else {
        if (j%2==0) {
            cout << a[j] << " ";
            solRecursively(i,j-1);
        }
        else solRecursively(i,j-1);
    }
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    solRecursively(0,n-1);

    return 0;
}
