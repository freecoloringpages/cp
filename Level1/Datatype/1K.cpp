#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    char sign;
    cin >> n >> sign >> m;
    char ch;
    if (n>m) ch='>';
    else if (n<m) ch='<';
    else ch='=';
    if (ch==sign) cout << "Right";
    else cout << "Wrong";
    return 0;
}
