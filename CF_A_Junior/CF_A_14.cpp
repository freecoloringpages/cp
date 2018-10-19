#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

string s;
int a[4], cnt[4]={0};

void input(){
    for (int i=0; i<4; i++)
        cin >> a[i];
    cin >> s;
}

long long sol(){
    int n=s.length();
    for (int i=0; i<n; i++){
        int c = s[i]-'0';
        cnt[c-1]++;
    }
    long long ans=0;
    for (int i=0; i<4; i++){
        ans=ans+a[i]*cnt[i];
    }
    return ans;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    cout << sol();

    return 0;
}
