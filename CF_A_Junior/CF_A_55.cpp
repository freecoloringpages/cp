//CF-A. 55. Anton and Polyhedrons
//(http://codeforces.com/contest/785/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=305;
const long long oo=1000000005;

int n;
long long ans=0;
void in(){
    cin >> n;
    for (int i=1; i<=n; i++){
        string s;
        cin >> s;
        if (s=="Tetrahedron") ans+=4;
        if (s=="Cube") ans+=6;
        if (s=="Octahedron") ans+=8;
        if (s=="Dodecahedron") ans+=12   ;
        if (s=="Icosahedron") ans+=20;
    }
    cout << ans;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    in();
    return 0;
}



