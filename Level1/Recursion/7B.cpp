#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

int n;
void printN1(int i, int j){
    if (i<j) return;
    else {
        if (i==j) cout << i;
        else {
            cout << i << " ";
            printN1(i-1,j);
        }
    }
}
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    cin >> n;
    printN1(n,1);

    return 0;
}
