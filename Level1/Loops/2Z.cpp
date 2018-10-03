#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t>0){
        long long n; cin >> n;
        long long nn=n;
        int cnt=0;//, cnt1=0;
        while(n>0){
            int r=n%2;
            //cout << r;
            if (r==1) cnt++;
            n/=2;
        }
        while (nn>0){
            int r = nn%10;
            if (r==1) cnt++;
            nn/=10;
        }
        cout << cnt << " ";
        t--;
    }
    return 0;
}
