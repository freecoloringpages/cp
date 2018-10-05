#include <bits/stdc++.h>
using namespace std;

#define sqr(x) x*x

const double pi=3.14159;

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);

    unsigned long long n; cin >> n;
    //int a[100]={0};
    vector<int> a;
    //int i=0;
    while (n>0){
        int r=n%2;
        //i++;
        //a[i]=r;
        a.push_back(r);
        n/=2;
    }
    //for (int j=i; j>0; j--) cout << a[j];
    for (int i=a.size()-1; i>=0; i--) cout << a[i];
    return 0;
}
