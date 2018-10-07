#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

bool isPalindrome(string s){
//Time limit on test 33
    string t="";
    for (int i=s.length()-1; i>=0; i--)
        t=t+s[i];
    return (t==s);
}
bool isPal(string s){
    //Get AC
    int n=s.length();
    bool flag=true;
    for (int i=0; i<n/2; i++)
        if (s[i]!=s[n-i-1]){
            flag=false;
            break;
        }
    return flag;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    string str; cin >> str;
    if (isPal(str)) cout << "YES";
    else cout << "NO";

    return 0;
}
