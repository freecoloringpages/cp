#include <bits/stdc++.h>
using namespace std;

const int oo=100005;

int a[1005];
int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    int t; cin >> t;
    while (t>0){
        int n; cin >> n;
        for (int i=0; i<n; i++) cin >> a[i];

        for (int i=0; i<n; i++){
            for (int j=i; j<n; j++){
                //cout << i << "-" << j << endl;
                int ma=-oo;
                for (int k=i; k<=j; k++){
                    ma=max(ma,a[k]);
                }
                cout << ma << " ";
            }
        }
        cout << endl;
        t--;
    }

    return 0;
}
