//CF.A.37. Young Physicist
//(http://codeforces.com/contest/69/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const long long oo=1000000005;

int n, a[maxN][3], b[3][maxN];
void in(){
    cin >> n ;
    for (int i=0; i<n; i++)
        for (int j=0; j<3; j++){
            cin >> a[i][j];
            b[j][i]=a[i][j];
        }
}

void sol(){
    bool ans=true;
    for (int i=0; i<3; i++){
        int s = 0;
        for (int j=0; j<n; j++){
            s=s+b[i][j];
        }
        if (s!=0){
            ans=false;
            break;
        }
    }
    if (ans) cout << "YES";
    else cout << "NO";
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    in();
    sol();

    return 0;
}



