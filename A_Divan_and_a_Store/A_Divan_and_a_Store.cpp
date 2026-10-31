#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main (){
    int test;
    scanf ("%d", &test);
    while (test--){
        int n, l, r, k; int dig, count=0; long long int money=0;
        scanf ("%d %d %d %d", &n, &l, &r, &k);
        int a[n];
        for (int i = 0 ; i<n; i++){
            scanf ("%d", &a[i]);
        }
        sort(a,a+n);
        for (int i = 0 ; i<n; i++){
            dig=a[i];
            if(dig>=l) if(dig<=r){money+=dig; if(money<=k)count++; }
        }
        printf("%d\n",count);
    }

}