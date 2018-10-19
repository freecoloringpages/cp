//CF-A. 64. Ksenia and Pan Scales
//(http://codeforces.com/contest/382/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=305;
const long long oo=1000000005;

string s, t;
void sol(){
    cin >> s >> t;
    int n=s.length();
    int m=t.length();
    string left="", right="";
    for (int i=0; i<n; i++){
        if (s[i]=='|')
            break;
        else
            left+=s[i];
    }

    int leftlen=left.length();

    for (int i=leftlen+1; i<n; i++)
        right+=s[i];
    int rightlen=right.length();
    int mm=t.length();

    if ((leftlen+rightlen+mm)%2!=0) cout << "Impossible";
    else if (mm+leftlen<rightlen || mm+rightlen<leftlen) cout << "Impossible";
    else {
        int nn=(leftlen+rightlen+mm)/2;
        cout << left;
        for (int i=0; i<nn-leftlen; i++) cout << t[i];//left+=t[i];
        cout << "|" << right;
        for (int i=nn-leftlen; i<mm; i++) cout << t[i];

     }
}
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    sol();
    return 0;
}



