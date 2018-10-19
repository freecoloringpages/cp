#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

int n,t,k,d;

int timeCook(int x){
    //Thoi gian de nuong x banh trong 1 lo
    int time=0;
    if (x%k==0) time=(x/k)*t;
    else {
        time=(x/k+1)*t;
    }
    return time;
}

int hailo(){
    int tx=d;
    int x=(d/t)*k; //So banh lam trong khi lam them Lo
    int y=(n-x)/2; //So banh 1 Lo phai nuong sau khi lam them lo
    tx+=timeCook(y);
    return tx;
}

void sol(){
    int kolo=timeCook(n); //Minutes
    int themlo=d;
    int x=(d/t)*k; //So banh lam trong khi lam them Lo
    int y=(n-x)/2; //So banh 1 Lo phai nuong sau khi lam them lo
    themlo+=timeCook(y);
    if (themlo<kolo) cout << "YES";
    else cout << "NO";
}

int main()
{
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);

    cin >> n >> t >> k >> d;
    cout << timeCook(n);

//    sol();

    return 0;
}
