#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        string sample;
        string s;
        cin >> sample;
        cin >> s;
        int sum=0;
        for (int i=0; i< s.size()-1; i++){
            char ch=s[i];
            char ch1= s[i+1];
            sum+= abs ((int)(sample.find(ch) - sample.find(ch1)));
        }
        cout << sum<< '\n';
    }
    
}