#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t>0){
        int n; cin >> n;
        int ans = 0, k=1;
        while (n>0){
            int r = n%2;
            n=n/2;
            cout << r;
        }
        cout << endl;
        t--;
    }
    return 0;
}
