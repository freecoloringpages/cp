//CF-A. 67. IQ Test
//(http://codeforces.com/contest/287/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const long long oo=1000000005;

char a[4][4];
void sol(){
    for (int i=0; i<4; i++)
        for (int j=0; j<4; j++)
            cin >> a[i][j];

    int ans=0;
    for (int i=0;  i<=2; i++)
    for (int j=0; j<=2; j++){
        int cntb=0, cntw=0;
        for (int k=i; k<i+2; k++){
            for (int l=j; l<j+2; l++){
                if (a[k][l]=='#') cntb++;
                else cntw++;
            }
        }
        if (cntb==3 || cntw==3 || cntb==4 || cntw==4){
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    sol();
    return 0;
}
