#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long n=0; long long count=0;
    cin >> n;
    cout << "? "<< 1 << " " << n << endl;
    cin >> count;
    if (count <0){cout << "Wrong answer" << endl; cout.flush(); return; }
    if (count == 0) {cout << "! NO" << endl; cout.flush(); return;}
    cout << "? "<< 1 << " " << count << endl;
    long long count2=0;
    cin >> count2;
    if (count2 <0){cout << "Wrong answer" << endl; cout.flush(); return; }
    if(count==count2) {cout << "! NO"  << endl; cout.flush(); return;}
    else {cout << "! YES"  << endl; cout.flush(); return;}

}

int main() {
    int t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }
    
    return 0;
}