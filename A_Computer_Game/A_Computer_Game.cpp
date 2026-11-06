#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    char a[n];
    char b[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }   
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        if(a[i] == '1' && b[i] == '1') {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main (){
    int test;
    cin >> test;
    while(test--) {
        solve();
    }
    return 0;
}