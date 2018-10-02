#include <bits/stdc++.h>
using namespace std;

int a[100003],b[100000];

int main()
{
    int code;
    double sl;
    cin >> code >> sl;
    cout << fixed << setprecision(2);
    if (code==1) cout << "Total: R " << sl*4.00;
    if (code==2) cout << "Total: R " << sl*4.50;
    if (code==3) cout << "Total: R " << sl*5.00;
    if (code==4) cout << "Total: R " << sl*2.00;
    if (code==5) cout << "Total: R " << sl*1.50;

    return 0;
}
