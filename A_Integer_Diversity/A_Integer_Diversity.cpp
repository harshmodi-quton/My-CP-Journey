#include <stdio.h>
int main(){
    int test;
    scanf ("%d", &test);
    while(test--){
        int n;
        scanf("%d", &n);
        int seen[101]={0}; 
        int value;
        for (int i=0; i< n; i++){
            scanf ("%d", &value);
            value= (value>0? value: -1*value);
            seen[value]++;
        }
        int count=0;
        for (int i=0; i<101; i++){
            if (i ==0) count+= seen[i]<1? seen[i]: 1;
            else count+= seen[i]<2? seen[i]: 2;

        }
        printf("%d\n", count);
    }
}