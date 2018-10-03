#include <bits/stdc++.h>
using namespace std;
long long f[50];
int main()
{
//    int n; cin >> n;
//    f[0]=0; f[1]=1;
//    for (int i=2; i<n; i++){
//        f[i]=f[i-1]+f[i-2];
//    }
//    for (int i=0; i<n; i++)
//        cout << f[i] << " ";
//

    long long a=0, b=1, c;
    int n; cin >> n;
    cout << a << " " << b << " ";
    for (int i=2; i<n; i++){
        c=a+b;
        cout << c << " ";
        a=b;
        b=c;
    }
    return 0;
}
