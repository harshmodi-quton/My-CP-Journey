#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; int k;
    cin >> n>> k;
    int a[n];
    int b[n];
    for (int i=0; i< n; i++) cin>> a[i];
    for (int i=0; i< n; i++) cin>> b[i];
    int evena=0; int evenb=0;
    for(int i=0; i< n; i++){
        if(a[i]%2==0) evena++;
        if(b[i]%2==0) evenb++;
    }
    if (evena==evenb) {cout << "YES"<< endl; return;}
    else {
        if (k%2==0){
            if (evena>evenb) {cout << "NO"<< endl; return;}
            else {cout << "YES"<< endl; return;}
        }
        else {
            if (evena>evenb) {cout << "YES"<< endl; return;}
            else {cout << "NO"<< endl; return;}
        }
    }
}

int main() {
    int t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }
    
    return 0;
}