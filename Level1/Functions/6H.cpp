#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

void findMinMax(int a[], int n, int &mi, int &ma){
    mi=oo; ma=-oo;
    for (int i=0; i<n; i++)
    {
        mi=min(mi,a[i]);
        ma=max(ma,a[i]);
    }
}

int aa[1005];
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    int n; cin >> n;
    for (int i=0; i<n; i++) cin >> aa[i];
    int ansMin, ansMax;
    findMinMax(aa, n, ansMin, ansMax);
    cout << ansMin << " " << ansMax;
    return 0;
}
