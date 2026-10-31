#include <stdio.h>
int check (int a, int b, int c){
    int count =0;
    if (a%2==0)
        count++;
    if (c%2==0)
        count++;
    if (b%2==0)
        count++;
    if ((a!=b)&&(b!=c)&&(c!=a)){
        if ((a==b+c)||(b==a+c)||(c==b+a)){
            return 1;
        }
        return 0;
    }
    else {
        if (count==3||count==1)
            return 1;
        else
            return 0;
    }
}
int main (){
    int test;
    scanf ("%d",&test);
    int input [test][3];
    for (int i=0; i<test; i++){
        scanf ("%d %d %d", &input[i][0], &input[i][1], &input[i][2] );
    }
    for (int i=0; i<test; i++){
        if (check (input[i][0],input[i][1],input[i][2])){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

}