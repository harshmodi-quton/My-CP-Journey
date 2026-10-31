#include <stdio.h>
void print(int a, int b){
    for (int i=0; i<a; i++){
        for (int j=0; j<a;j++){
            if ((b>0)&&(i==j)&&(i%2==0)){
                printf ("R");
                b--;
            }
            else
                printf(".");
        }
        printf("\n");
    }
}
int main(){
    int test;
    scanf ("%d", &test);
    int input[test][2];

    for (int i=0; i<test; i++){
        scanf ("%d %d", &input[i][0], &input[i][1]);
    }
    for (int i =0; i<test; i++){
        if (input[i][0]%2==0){
            if (input[i][0]/2>=input[i][1]){
                print(input[i][0],input[i][1]);
            }
            else {
                printf ("-1\n");
            }
        }
        else {
            if ((input[i][0]+1)/2>=input[i][1]){
                print(input[i][0],input[i][1]);
            }
            else {
                printf ("-1\n");
            }   
        }
    }
}
