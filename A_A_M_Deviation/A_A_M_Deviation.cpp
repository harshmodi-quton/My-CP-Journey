#include <bits/stdc++.h>
using namespace std;
void solve (){
    int a, b, c;
    cin>> a>> b>> c;
    int v=abs ( a+ c - 2*b);
    if (v %3==2) cout << 1 <<"\n";
    else cout << v %3 << "\n";
}
int main (){
    int test;
    cin >> test;
    while (test--){
        solve ();
    }
}