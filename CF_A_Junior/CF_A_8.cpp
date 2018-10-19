//http://codeforces.com/contest/791/problem/A
#include <bits/stdc++.h>
using namespace std;

const int maxN=105;
const int oo=1000005;

string username;

void input(){
    getline(cin,username);
}

int sol(){
    int a[26]={0};
    for (int i=0; i<username.length(); i++){
        int c = username[i]-'a';
        a[c]++;
    }
    int cnt=0;
    for (int i=0; i<26; i++)
        if (a[i]!=0) cnt++;

    return cnt;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    if (sol()%2==0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";

    return 0;
}
