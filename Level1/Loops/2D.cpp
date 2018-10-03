#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int neg=0, pos=0, odd=0, even=0;
    for (int i=1; i<=n; i++){
        int x; cin >> x;
        if (x<0) neg++;
        if (x>0) pos++;
        if (x%2==0) even++;
        if (x%2 != 0) odd++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;

    return 0;
}
