#include <stdio.h>
void pl (char c, int len ){
    for (int i=0; i<len; i++){
        printf("%c", c);
    }
    printf ("\n");
}
int main(){
    int test; int x,y,z;
    scanf ("%d", &test);
    for (int i=0; i<test; i++){
        scanf ("%d %d %d", &x, &y, &z);
        if (x>=y&&x>=z){
            pl ('P', x+y+z);
        }
        else if (y>=x&&y>=z){
            pl ('R', x+y+z);
        }
        else if (z>=y&&z>=x){
            pl ('S', x+y+z);
        }

    }
}