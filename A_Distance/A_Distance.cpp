#include <stdio.h>
#include <math.h>

int main(){
    int test;
    scanf ("%d", &test);
    for (int i = 0; i< test; i++){
        int x, y;
        scanf ("%d %d\n", &x,&y);
        if ((x+y)%2!=0) {printf("-1 -1\n"); continue;}
        int n = (x + y)/2; 
        if (x>=y){
            if (n>= abs(x -y)/2 )  printf ("%d %d\n", abs(x -y)/2, n-abs(x -y)/2);
            else printf("-1 -1\n");
        }
        if (x<=y){
            if (n>= abs(x -y)/2 )  printf ("%d %d\n",  n-abs(x -y)/2,abs(x -y)/2);
            else printf("-1 -1\n");
        }
    }
}