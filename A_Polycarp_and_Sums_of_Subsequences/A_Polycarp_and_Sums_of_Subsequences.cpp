#include <bits/stdc++.h>
using namespace std;
int main(){
    int test; int a , b , c;
    cin >> test;
    int ar[7];
    for(int i = 0; i < test; i++){
        for (int j=0;j<7;j++){
            cin>> ar[j];
        }
        a= ar[0];
        b= ar[1];
        c= ar[6]-b-a;
        cout << a<< " "<< b<< " "<< c<<"\n";
    }
}