#include <stdio.h>

int main (){
    int test;
    scanf ("%d", &test);
    while(test--){
        int n;
        scanf ("%d", &n);
        int t=3;
        while(n--){
            printf("%d ", t);
            t+=2;
        }
        printf("\n");
    }
}