#include <bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    string s1, s2;
    cin >> s1 >> s2;
    int len1=s1.length();
    int len2=s2.length();
    cout << len1 << " " << len2 << endl;
    cout << s1+s2 << endl;
    char c = s1[0];
    s1[0]=s2[0];
    s2[0]=c;
    cout << s1 << " ";
    cout << s2 << endl;
    return 0;
}
