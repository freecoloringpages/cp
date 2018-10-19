//http://codeforces.com/contest/791/problem/A
#include <bits/stdc++.h>
using namespace std;

const int maxN=1005;
const int oo=1000005;

int a,b;
void input(){
    cin >> a;
    cin >> b;
}

void sol(){
    int time=0;
    while (a<=b){
        a=3*a;
        b=2*b;
        time++;
    }
    cout << time;
}


int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    input();
    sol();

    return 0;
}
