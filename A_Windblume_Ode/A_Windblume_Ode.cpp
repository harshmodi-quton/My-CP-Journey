#include <bits/stdc++.h>
using namespace std;
bool is_prime(int a){
    bool flag= true;
    if (a==2) return true;
    for (int i=2; i<a; i++){
        if (a %i==0) {flag= false; break;}
    }
    return flag;
}
int main(){
    int test;
    cin >> test;
    while (test--){
        int n ;
        cin >> n;
        int a [n];
        int even=0;
        int oneodd;
        long long sum=0;
        for (int i=0; i < n; i++){
            cin>> a[i];
            sum+= a[i];
            if (a[i]%2==0) even++;
            else oneodd = i;
        }
        int odd= n- even;
        int prnt;
        if (odd %2==0){
            prnt = -1;
        }
        else{
            prnt = oneodd;
        }
        if (prnt==-1){
            cout<< n << endl;
            for (int i=0; i< n; i++) cout << i+1 << " ";
            cout << endl;
        }
        else{
            if(is_prime(sum)){
                cout<< n -1 << endl;
                for (int i=0; i< n; i++) if(prnt!=i) cout << i+1 << " ";
                cout << endl;
            }
            else{
                cout<< n << endl;
                for (int i=0; i< n; i++) cout << i+1 << " ";
                cout << endl;
            }
        }

    }
}