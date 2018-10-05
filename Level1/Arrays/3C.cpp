#include <bits/stdc++.h>
using namespace std;

int a[100005];
int main()
{
    int n; cin >> n;
    long long s=0;
    for (int i=0;i<n; i++)
        {
            int t; cin >> t;
            s=s+t;
        }
        cout << s << endl;
}
