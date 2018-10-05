#include <bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    string s; getline(cin,s);
    int n=s.length();
    for (int i=0; i<n; i++){
        s[5]=' ';
        s[13]=' ';
    }
    cout << s << endl;

    return 0;
}
