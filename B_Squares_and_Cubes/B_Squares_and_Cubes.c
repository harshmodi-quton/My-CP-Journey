#include <stdio.h>
#include <math.h>
int main(){
    int test;scanf("%d",&test);
    for (int i=0; i<test; i++){
        int n; scanf ("%d",&n);
        int count= sqrt(n);
        count += cbrt(n);
        count -=(int)sqrt ((int)cbrt(n));
        printf("%d\n",count);

    }
}