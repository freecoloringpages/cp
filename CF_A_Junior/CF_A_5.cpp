//http://codeforces.com/contest/791/problem/A
#include <bits/stdc++.h>
using namespace std;

const int maxN=5;
const int oo=1000005;

int a[maxN][maxN], row, col;

void input(){
    for (int i=0; i<5; i++)
        for (int j=0; j<5; j++){
            cin >> a[i][j];
            if (a[i][j]==1){
                row=i; col=j;
            }
        }
}

int sol(){
    return abs(row-2)+abs(col-2);
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    cout << sol();

    return 0;
}
