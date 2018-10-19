#include <bits/stdc++.h>
using namespace std;

const int maxN=100005;
const int oo=1000005;

int n;
int a[maxN];
void input(){
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
}
//Duy trì cs là số lượng cảnh sát rảnh rỗi hiện thời; nếu tuyển thêm cs-> cộng thêm vào cs;
//nếu có tội phạm, trừ bớt ở cs nếu cs>0; ngược lại -> đếm số tội phạm ko được quản lí
int sol(){
    int cs=0, cnt=0;
    for (int i=0; i<n; i++){
        if (a[i]>0) cs+=a[i];
        else {
            if (cs>0) cs--;
            else cnt++;
        }
    }
    return cnt;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    cout << sol();

    return 0;
}
