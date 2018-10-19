//CF-A. 49. Brain's Photos
//(http://codeforces.com/contest/707/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const long long oo=1000000005;

int n,mm;
int c=0,m=0,y=0,w=0,g=0,b=0;

void in(){
    cin >> n >> mm;
    for (int i=0; i<n; i++)
    for (int j=0; j<mm; j++){
        char ch; cin >> ch;
        if (ch=='C') c++;
        if (ch=='M') m++;
        if (ch=='Y') y++;
        if (ch=='W') w++;
        if (ch=='G') g++;
        if (ch=='B') b++;
    }
    //cout << c+m+y << endl << w+g+b << endl;
    if (w+g+b==n*mm) cout << "#Black&White";
    else cout << "#Color";
}


int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    in();

    return 0;
}



