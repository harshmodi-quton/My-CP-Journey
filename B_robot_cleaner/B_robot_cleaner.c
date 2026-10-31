#include <stdio.h>
#include <stdlib.h>
void main (){
    int tests; int counter=0;
    scanf ("%d", &tests);
    int input [tests][6];
    for (int i =0; i<tests; i++){
        scanf ("%d %d %d %d %d %d",&input [i][0],&input [i][1],&input [i][2],&input [i][3],&input [i][4],&input [i][5]);
    }
    for (int i=0; i<tests; i++){
        while ((abs(input[i][2])!=input[i][4])&&(abs(input[i][3])!=input[i][5])){
            if (abs(input[i][2])>=input[i][0]){
                input [i][2]*=-1;
            }
            if (abs(input[i][3])>=input[i][1]){
                input [i][3]*=-1;
            }
            input[i][2]++;
            input[i][3]++;
            counter++;
            if (abs(input[i][2])<=1){
                input [i][2]*=-1;
            }
            if (abs(input[i][3])<=1){
                input [i][3]*=-1;
            }
        }
        printf ("%d\n",counter);
        counter=0;
    }
    
}