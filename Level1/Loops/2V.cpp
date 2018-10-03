#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int x,y; cin >> x >> y;
    int sum = 0;
    for (int i=1; i<=n; i++){
        int t = 0;
        int tt = i;
        while (tt>0){
            t+=tt%10;
            tt/=10;
        }
        if (t>=x && t<=y) sum+=i;
    }
    cout << sum;
    return 0;
}
