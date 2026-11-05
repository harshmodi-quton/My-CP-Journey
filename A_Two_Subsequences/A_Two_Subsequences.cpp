#include <bits/stdc++.h>
using namespace std;
void solve (){
    string s;
    cin >> s; char min='z';
    for (char ch : s) if (min>ch)min=ch;
    cout << min << " " << s.erase(s.find(min),1)<< "\n";
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve ();
    }
}