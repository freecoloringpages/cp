#include <bits/stdc++.h>
using namespace std;

string chk(int n){
    if (n%2==0) return "EVEN";
    else return "ODD";
}

int main()
{
    int n;
    cin >> n;
    if (n<10) cout << chk(n);
    else if (n<100) cout << chk(n/10);
    else if (n<1000) cout << chk(n/100);
    else if (n<10000) cout << chk(n/1000);
    return 0;
}
