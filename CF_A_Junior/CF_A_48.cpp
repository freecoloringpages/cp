//CF-A. 48. Football
//(http://codeforces.com/contest/43/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const long long oo=1000000005;


int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int n; cin >> n;
    string team1, team2; cin >> team1;
    int goal1=1, goal2=0;

    for (int i=1; i<n; i++){
        string s;
        cin >> s;
        if (s==team1) goal1++;
        else {
            goal2++;
            team2=s;
        }
    }
    if (goal1>goal2) cout << team1 << endl;
    else cout << team2 << endl;

    return 0;
}



