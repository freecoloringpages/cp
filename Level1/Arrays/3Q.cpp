#include <bits/stdc++.h>
using namespace std;

const int oo=100005;
int a[300]; int n;
bool chk(int x[],int n){
    bool flag=true;
    for (int i=1; i<=n; i++)
    if (x[i]%2 != 0) {
        flag=false;
        break;
    }
    return flag;
}

void ope(){
    for (int i=1; i<=n; i++)
        a[i]/=2;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];

    int cnt=0;
    do{
        if(chk(a,n)) {
            cnt++;
            ope();
        }
        else break;
    } while (true);
    cout << cnt;

    return 0;
}
