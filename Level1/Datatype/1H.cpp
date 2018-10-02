#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int y = n/365;
    int m = (n-y*365)/30;
    int d = n-y*365-m*30;
    cout << y << " years" << endl << m << " months" << endl << d << " days";// << endl;
    return 0;
}
