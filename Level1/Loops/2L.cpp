#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    bool flag=true;
    for (int i=2; i<=round(sqrt(n)); i++){
        if (n%i==0){
            flag = false;
            break;
        }
    }
    if (flag) cout << "YES";
    else cout << "NO";

    return 0;
}
