#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    while (n>0){
        int x,y;
        cin >> x >> y;
        int cnt=0;
        int sum=0;
        while (cnt<y){
            if (x%2==1){
                sum+=x;
                x+=2;
                cnt++;
            }
            else {
                x++;
                sum+=x;
                x+=2;
                cnt++;
            }
        }
        cout << sum << endl;
        n--;
    }
    return 0;
}
