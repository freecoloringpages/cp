#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << min(min(a,b),min(c,d))<< " " << max(max(a,b),max(c,d));
    return 0;
}
