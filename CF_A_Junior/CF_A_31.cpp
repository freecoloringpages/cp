//CF.A.31. Lineland Mail
//(http://codeforces.com/contest/567/problem/A)

#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

int n, a[maxN];

void input(){
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
}

int kc(int x, int y){
//Tinh khoang cach tu toa do x den toa do y
    return abs(x-y);
}

int mini(int i){
//Tim khoang cach MIN tu diem a[i]
    int x=kc(a[i],a[i-1]);
    int y=kc(a[i],a[i+1]);
    return min(x,y);
}

int maxi(int i){
    int x = kc(a[i],a[1]);
    int y = kc(a[i],a[n]);
    return max(x,y);
}

void sol(){
    for (int i=1; i<=n; i++){
        int mi=oo, ma=-oo;
        if (i==1) {
            mi=kc(a[1],a[2]);
            ma=kc(a[1],a[n]);
        }
        else if (i==n) {
            mi=kc(a[n],a[n-1]);
            ma=kc(a[1],a[n]);
        }
        else {
            mi=mini(i);
            ma=maxi(i);
        }
        cout << mi << " " << ma << endl;
    }
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    sol();

    return 0;
}
