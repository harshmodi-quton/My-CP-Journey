#include <stdio.h>
int main (){
    int test;
    scanf ("%d", &test);
    for (int i = 0 ; i<test ; i++){
        int n; int dig;
        scanf ("%d", &n); int sum=0;
        for(int j=0; j<n ; j++){
            scanf ("%d", &dig);
            sum+=dig;
        }
        sum%n==0? printf("0\n"): printf ("1\n");

    }
}