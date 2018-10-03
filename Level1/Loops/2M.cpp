#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t>0){
        int n; cin >> n;
        bool flag=true;
        for (int i=2; i<=round(sqrt(n)); i++){
            if (n%i==0){
                flag = false;
                break;
            }
        }
        if (flag) cout << "Prime" << endl;
        else cout << "Not" << endl;
        t--;
    }
    return 0;
}
