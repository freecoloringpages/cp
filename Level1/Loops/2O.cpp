#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t>0){
        int x,y; cin >> x >> y;
        if (x>y) swap(x,y);
        int ans=0;
        for (int i=x+1; i<y; i++)
            if (i%2 != 0) ans+=i;
        cout << ans << endl;
        t--;
    }
    return 0;
}
