#include <stdio.h>
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

int main(){
    int test; int a, b, m;
    scanf("%d", &test);
    for (int i=0; i<test;i++){
        scanf ("%d %d", &a , &b);
        m= MIN((a+b)/4,b);
        printf("%d\n", MIN (m, a));
    }
}