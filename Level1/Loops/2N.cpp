#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t>0){
        int n; cin >> n;
        int cnt=0, m=n, k=1;
        while (n!=0){
            n/=10;
            k=k*10;
            cnt++;
        }
        k=k/10;
        while (m!=0){
            cout << m/k << " ";
            m=m%k;
            k=k/10;
        }
        cout << endl;
        t--;
    }
    return 0;
}
