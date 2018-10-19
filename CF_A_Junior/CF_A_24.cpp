#include <bits/stdc++.h>
using namespace std;

const int maxN=1005;
const int oo=1000005;

char a[maxN];
int m=0;

void input(){
    string s;
    getline(cin,s);
    int n=s.length();

    for (int i=0; i<n; i++){
        if (s[i]>='a' && s[i]<='z'){
            a[m]=s[i];
            m++;
        }
    }
}

void sol(){
    set<char> st(a,a+m);
    cout << st.size();
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    sol();

    return 0;
}
