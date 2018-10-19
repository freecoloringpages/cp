//CF-A. 59. Dice Tower
//(http://codeforces.com/contest/225/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=305;
const long long oo=1000000005;

int n;
void in(){
    cin >> n;
    int top; cin >> top;
    bool flag=true;
    int i=0;
    while(i<=n){
        int bottom = 7-top;
        int x,y; cin >> x >> y;
        if (top==x || x==bottom || top==y || y==bottom) {
            flag=false;
            break;
        }
        top=bottom;
        i++;
    }
    if (flag) cout << "YES";
    else cout << "NO";
}
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    in();
    return 0;
}



