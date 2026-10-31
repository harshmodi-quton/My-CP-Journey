#include <stdio.h>
int main(){
    int test;
    int n; int even=0, haseven=0, hasfisteven=0;
    scanf ("%d", &test);
    for (int i=0; i<test; i++){
        scanf ("%d", &n); 
        even=0, haseven=0; hasfisteven=0;
        if (n%2==0) even=1;
        n/=10;
        while (n>9){
            if (n%2==0) haseven =1;
            n/=10;
        }
        if (n%2==0&&n!=0) hasfisteven=1;
        if (even) printf("0\n");
        else if (hasfisteven ) printf("1\n");
        else if (haseven ) printf("2\n");
        else printf("-1\n");
        
    }
}