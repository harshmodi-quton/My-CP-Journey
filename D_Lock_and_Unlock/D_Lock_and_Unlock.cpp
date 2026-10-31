#include <bits/stdc++.h>   // includes almost everything (GCC only)
using namespace std;

int main() {
    int t;int n; long long diff;
    cin >> t;
    while (t--) {
        long long opp=0, cost=0;  
        cin >>n;
        int a[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a + n); 
        for (int i=1; i<n; i++){
            diff = (long long)a[i] - a[i-1];
            if(diff!=0){
                opp+= diff;
                cost+= min(i, n-i)*diff;
            }
        }
        printf("%lld %lld\n", cost, opp );
    }
    return 0;
}