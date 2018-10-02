#include <bits/stdc++.h>
using namespace std;
void print(int id){
    if (id==1) cout << "Amr";
    else if (id==2) cout << "Waleed";
    else if (id==3) cout << "Mustafa";
    else if (id==4) cout << "Youssef";
}
int main()
{
    long long a,b,c,d; cin >> a >> b >> c >> d;
    long long mi;
    int id,cnt=0;
    mi = min(min(a,b),min(c,d));
    if (a==mi) cnt++;
    if (b==mi) cnt++;
    if (c==mi) cnt++;
    if (d==mi) cnt++;
    mi=a; id=1;
    if (b<mi){
        mi=b; id=2;
    }
    if (c<mi){
        mi=c; id=3;
    }
    if (d<mi){
        mi=d;
        id=4;
    }
    if (cnt==1) print(id);
    else cout << "We are the best";
    return 0;
}
