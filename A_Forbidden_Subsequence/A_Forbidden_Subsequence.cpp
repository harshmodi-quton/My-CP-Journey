#include <stdio.h>
#include <string.h>
int main(){
    int test;
    scanf ("%d", &test);
    char str[100];
    char per[4];
    for (int i=0; i< test; i++){
        int possible = 0 ;
        scanf ("%s", str);
        int length= strlen(str);
        char arr[length];
        strcpy(arr, str);
        scanf("%3s", per); 
        char temp; 
        if(strchr(arr,'a')!=0 && strchr(arr,'b')!=0 && strchr(arr,'c')!=0) possible=1;
        for(int j=0; j<length; j++){
            for(int k=0; k<length; k++){
                if (arr[j]<arr[k]){
                    temp=arr[j];
                    arr[j]=arr[k];
                    arr[k]= temp;
                    }
                }
            }
        
        if((possible)&&strcmp(per, "abc") == 0){
            int cinx= strchr(arr, 'c')-arr;
            int binx= strchr(arr,'b')-arr; temp= arr[cinx];
            while(arr[cinx]=='c'){
                for(int j=cinx ;j>binx; j--){
                    
                  arr[j]=arr[j-1];

                }
                arr[binx]=temp; cinx++;
            }
        }
        
        for (int j=0; j<length; j++){
            printf ("%c",arr[j]);
            
        }
        printf("\n");
    }
}
