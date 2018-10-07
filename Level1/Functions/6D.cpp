#include <bits/stdc++.h>
using namespace std;
//https://gist.github.com/completejavascript/a387c49aba48e83f5f0659c547dfa0c0#file-combination-cpp
const int maxN=100005;

long long combination(int k, int n){
    long long r=1;
    for (int i=1; i<=k; i++){
        r=r*n/i;
        n--;
    }
    return r;
}

int main()
{
//    freopen("input.inp","r",stdin);
//    freopen("output.out","w",stdout);
    int n,k; cin >> n >> k;
    cout << combination(k,n) << endl;
    return 0;
}
