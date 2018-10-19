#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

string s;
void input(){
    getline(cin,s);
}

int chkleft(char c1, char c2){
    int left = abs(c1-c2);
    return left;
}

int chkright(char c1, char c2){
    int left=abs(c1-c2);
    int right = 26-left;
    return right;
}

int findMin(char c1, char c2){
    return min(chkleft(c1,c2),chkright(c1,c2));
}

int sol(){
    int ans=findMin('a',s[0]);
    int n = s.length();
    for (int i=0; i<n-1; i++)
    {
        int mi = findMin(s[i],s[i+1]);
        ans+=mi;
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
