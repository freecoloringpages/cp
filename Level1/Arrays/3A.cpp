#include <bits/stdc++.h>
using namespace std;

int a[1000005];
int main()
{
    int n; cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    for (int i=1; i<=n; i++){
        if (a[i]<0) a[i]=2;
        else if (a[i]>0) a[i]=1;
    }
    for (int i=1; i<=n; i++) cout << a[i] << " ";

    return 0;
}
