#include <stdio.h>
int main(){
    int test;
    scanf ("%d",&test);
    for (int i=0; i<test;i ++){
        int length;
        scanf("%d",&length);
        char str[length];
        char bigram [3]; char last; int idx=0;
        int flag=0;
        for (int j=0;j<length-2;j++,idx++){
            scanf("%2s",bigram);
            if(j!=0){
                if(last==bigram[0]){
                    str[idx]=bigram[0];
                    last=bigram[1];
                }
                else{
                    str[idx++]=last;
                    str[idx]=bigram[0];
                    last= bigram[1]; flag++;
                }
            }
            else{
                str[idx]=bigram[0];
                last=bigram[1];
            }
        }
        if(!flag||length==3) str[length-2]=last;
        str[length-1]=last;
        for(int i=0;i<length; i++){
            printf("%c", str[i]);
        }
        printf("\n");
    }
}