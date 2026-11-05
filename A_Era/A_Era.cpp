#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n; int max_diff =0; int diff=0;
    for (int i=1; i<=n ; i++){
        int temp;
        cin >> temp;
        diff = (temp-i)>=0?  (temp-i):0;
        max_diff= max_diff< diff? diff: max_diff;
    }
    cout << max_diff<< "\n";
}
int main(){
    int test;
    cin >> test;
    while (test--){
        solve();
    }
}