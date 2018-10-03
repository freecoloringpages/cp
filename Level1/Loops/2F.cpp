#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int ma = -1005;
    for (int i=1; i<=n; i++){
        int x; cin >> x;
        ma = max(x,ma);
    }
    cout << ma;
    return 0;
}
