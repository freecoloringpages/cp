#include <bits/stdc++.h>
using namespace std;

const int maxN=1005;
const int oo=1000005;

string s;
int a[4]={0};
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    getline(cin,s);
    int n = s.length();

    int sign=0, num=0;
    for (int i=0; i<n; i++){
        if (s[i]!='+')
        {
            num++;
            int x=s[i]-'0';
            a[x]++;
        }
    }
    sign=n-num;
    int x=0;
    for (int i=1; i<=3; i++)
        if (a[i]>0)
            for (int j=1; j<=a[i]; j++)
                {
                    cout << i;
                    if (x<sign) {
                        cout << "+";
                        x++;
                    }
                }
    return 0;
}
