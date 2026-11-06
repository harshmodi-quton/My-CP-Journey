#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n ; long long health;
    cin >> n>> health; 
    long long max=0,smax=0;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x > max) {
            smax = max;   
            max = x;
        } else if (x > smax) {
            smax = x;   
        }
    }
    int count = health/ (max + smax);
    health = health % (max+smax);
    count *=2;
    if (health>0) {count ++; health-= max;}
    if (health>0){ count ++;}
    cout << count<< endl;
}
int main (){
    int test;
    cin >> test;
    while (test--){
        solve();
    }
}