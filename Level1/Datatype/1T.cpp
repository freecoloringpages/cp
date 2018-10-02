#include <bits/stdc++.h>
using namespace std;

int main()
{
    //1T
    int a,b,c; cin >> a >> b >> c;
    if (a<=b && b<=c) cout << a << " " << b << " " << c << endl;
    if (a<=c && c<=b) cout << a << " " << c << " " << b << endl;
    if (b<=a && a<=c) cout << b << " " << a << " " << c << endl;
    if (b<=c && c<=a) cout << b << " " << c << " " << a << endl;
    if (c<=a && a<=b) cout << c << " " << a << " " << b << endl;
    if (c<=b && b<=a) cout << c << " " << b << " " << a << endl;
    cout << endl << a << endl << b << endl << c;
    return 0;
}
