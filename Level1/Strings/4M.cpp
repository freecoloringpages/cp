#include <bits/stdc++.h>
using namespace std;
const int oo=0;
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    string s; cin >> s;
    int n=s.length();
    int a[26]={0};

    for (int i=0; i<n; i++)
    {
        int x = s[i]-'a'; //cout << x << endl;
        a[x]++;
    }
    for (int i=0; i<26; i++){
        if (a[i]!=0)
            cout << char('a'+i) << " : " << a[i] << endl;
    }

    return 0;
}
