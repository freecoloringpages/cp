#include <bits/stdc++.h>
using namespace std;

const int maxN=105;
const int oo=1000005;

int n,b,d,a[maxN];

void sol(){
    cin >> n >> b >> d;
    long long ans=0; //Số lần dọn sạch máy vắt
    long long sum=0; //Đếm tổng kích thước cam để vắt tiết kiệm
    for (int i=0; i<n; i++){
        int a; cin >> a;
        if (a<=b){
            sum+=a;
        }
        if (sum>d){
            ans++;
            sum=0;
        }
    }
    cout << ans;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    sol();

    return 0;
}
