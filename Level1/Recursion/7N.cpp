#include <bits/stdc++.h>
using namespace std;

const int maxN=1005;
const int oo=1000005;

int n;
void input(){
    cin >> n;
}

void sol(int n, int i, vector<int> &a){
    if (n==0) return;
    else {
        a.push_back(n%10);
        sol(n/10,i++,a);
    }
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    int t; cin >> t;
    while(t>0){
        input();
        vector<int> aa;
        sol(n,0,aa);
        for (int i=aa.size()-1; i>=0; i--)
            if (i>0)
                cout << aa[i] << " ";
            else cout << aa[i];
        cout << endl;
        t--;
    }
    return 0;
}
