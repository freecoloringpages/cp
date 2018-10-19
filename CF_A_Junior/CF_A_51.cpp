//CF-A. 50. Dubstep
//(http://codeforces.com/contest/208/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=305;
const long long oo=1000000005;
int n;
char a[maxN][maxN];
void in(){
    cin >> n;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            cin >> a[i][j];
}

bool checkX(char c){
    bool flag=true;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (i==j || j==n-i+1)
                if (a[i][j]!=c){
                    flag=false;
                    break;
                }
        }
    }
    return flag;
}

bool checkK(char c){
    bool flag=true;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (i!=j && j!=n-i+1)
                if (a[i][j]!=c){
                    flag=false;
                    break;
                }
        }
    }
    return flag;
}

void sol(){
    char x=a[1][1];
    char c=a[1][2];
    if (checkX(x) && checkK(c) && c!=x) cout << "YES";
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



