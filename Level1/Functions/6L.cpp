#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

int valid(string s){
    int sign;
    for (int i=0; i<3; i++)
    if (s[i]=='+'){
        sign=1;
        break;
    }
    else if (s[i]=='-') {
        sign=0;
        break;
    }
    return sign;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int n; cin >> n;
    int xx=0;
    for (int i=1; i<=n; i++)
    {
        string str; cin >> str;
        if (valid(str)==1) xx++;
        else xx--;
    }
    cout << xx ;

    return 0;
}
