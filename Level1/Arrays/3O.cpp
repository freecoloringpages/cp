#include <bits/stdc++.h>
using namespace std;

const int oo=100005;

char ca[105];

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int a,b; cin >> a >> b;
    int n = (a+b+1);
    for (int i=1; i<=n; i++) cin >> ca[i];

    bool f1=true,f2,f3=true;
    for (int i=1; i<=a; i++)
        if (!(ca[i]>='0' && ca[i]<='9'))
        {
            f1=false;
            continue;
        }

    if (ca[a+1]=='-') f2=true;
    else f2=false;

    for (int i=a+2; i<=n; i++)
        if (!(ca[i]>='0' && ca[i]<='9'))
        {
            f3=false;
            continue;
        }
    if (f1&&f2&&f3) cout << "Yes";
    else cout << "No";

    return 0;
}
