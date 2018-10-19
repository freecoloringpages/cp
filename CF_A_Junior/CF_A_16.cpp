#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

int n;
int h[maxN], a[maxN];

void input(){
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> h[i] >> a[i];
    }
}

void sol(){
    int cnt=0;
    for (int i=0; i<n; i++)
    for (int j=0; j<n; j++){
        if (i!=j)
            if (h[i]==a[j]) cnt++;
    }
    cout << cnt << endl;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    sol();

    return 0;
}
