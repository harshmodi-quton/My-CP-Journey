#include <stdio.h>

int main(){
    int test; int n; int end; int mid; int sum=0;
    scanf ("%d", &test);
    for (int i=0; i<test; i++){
        scanf ("%d", &n);
        int a[n];
        sum=end=mid=0;
        for (int j=0; j<n; j++){
            scanf ("%d", &a[j]);
            sum+= a[j];
            if(a[j]>1){
                if((j==0)||(j==(n-1))) end++;
                else mid++;
            }
        }
        if(mid){
            printf("%d\n", (sum-1));
        }
        else{
            if(end){
                printf("%d\n", a[0]+a[n-1]-1);
            }
            else printf("-1\n");
        }

    }
}