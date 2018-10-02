#include <bits/stdc++.h>
using namespace std;

int a[100003],b[100000];

int main()
{
    int x, y, kq, ans;
    char sign, equ;
    cin >> x >> sign >> y >> equ >> kq;
    if (sign=='+') ans=x+y;
    else if (sign=='-') ans=x-y;
    else if (sign=='*') ans=x*y;
    if (ans==kq) cout << "Yes";
    else cout << ans;
    return 0;
}
