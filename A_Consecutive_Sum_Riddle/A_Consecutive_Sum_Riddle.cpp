#include <bits/stdc++.h>
using namespace std;
long long ipow( int exp) {
    long long res = 1;
    while (exp > 0) {
        res *= 2;
        exp--;
    }
    return res;
}
void solve(){
    long long n;
    cin >> n;
    int count = 0;
    while(n%2==0){
        n/=2;
        count++;
    }
    cout <<(n +1 - ipow(count+1))/2 << " "<<(n -1 + ipow(count+1))/2  << "\n";

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}