#include <bits/stdc++.h>
using namespace std;
void solve (){
    int a, b, c;
    cin >> a >> b >> c;
    int best = max(a, max(b, c));
    if (a==b && b==c){
        cout << 1 << " " << 1 << " " << 1 << endl;
        return;
    }
    if (a==b && b==best || b==c && c==best || a==c && c==best){
        if (a==b){
            cout << 1 << " " << 1 << " " << (((best - c)==0)?0: (best - c)+1) << endl;
            return;
        }
        if (b==c){
            cout << (((best - a)==0)? 0: (best - a)+1) << " " << 1 << " " << 1 << endl;
            return;
        }
        if (a==c){
            cout << 1 << " " << (((best - b)==0)?0: (best - b)+1) << " " << 1 << endl;
            return;
        }

    }
    cout << (((best - a)==0)? 0: (best - a)+1) << " " << (((best - b)==0)?0: (best - b)+1) << " " << (((best - c)==0)?0: (best - c)+1) << endl;
}
int main (){
    int test;
    cin >> test;
    while (test--){
        solve();
    }
}