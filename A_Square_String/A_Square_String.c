#include <stdio.h>
#include <string.h>
int main (){
    int test;
    scanf ("%d",&test);
    char a[100];
    for (int i=0; i<test;i++){
        scanf ("%s", a);
        if (strlen(a)%2!=0){
            printf("NO\n");
            continue;
        }
        char c[strlen(a)];
        strcpy(c,a); int flag=0;
        for(int j=0; j<strlen(a)/2 ;j++){
            if(c[j]!=c[strlen(a)/2+j]) {flag++;break;}
        }
        if(flag) printf("NO\n");else printf ("YES\n");
    }
}