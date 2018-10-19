//CF-A. 62. Help Vasilisa the Wise 2
//(http://codeforces.com/contest/143/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=305;
const long long oo=1000000005;

int r1,r2,c1,c2,d1,d2;
void sol(){
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    if ((r1+r2)==(c1+c2) && (c1+c2)==(d1+d2)){
        int a = (r1+c1-d2)/2;
        int b = r1-a;
        int c=c1-a;
        int d=d1-a;
        if (a!=b && b!=c && c!=d && a!=d && a!=c && a!=b && b!=d && a>=1 && a<=9 && b>=1 && b<=9 && c>=1 && c<=9 && d>=1 && d<=9){
                cout << a << " " << b << endl;
                cout << c << " " << d << endl;
        }
        else cout << -1;
    } else cout << -1;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    sol();
    return 0;
}



