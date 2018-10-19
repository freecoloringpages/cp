#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

int a[4];
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    for (int i=0; i<4; i++)
        cin >> a[i];
    set<int> s(a,a+4);
    cout << 4-s.size() << endl;

    return 0;
}
