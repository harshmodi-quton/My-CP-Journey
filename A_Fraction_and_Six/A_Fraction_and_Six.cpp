#include <stdio.h>
#include <string.h>
int main (){
    int test;
    int a,b; char c; char *pos; int no=0;
    scanf ("%d", &test);
    for (int i=0; i<test; i++)
    {   
        no=0;
        scanf("%d %d", &a,&b);
        char p[a+1];
        char q[b+1];
        scanf("%s", p);
        scanf("%s", q);
        for(int j=0; j<b; j++){
            c = q[j];
            pos = strchr(p, c);
            if (pos==NULL){ no =1; break;}
            memmove(pos,pos + 1, strlen( pos + 1) + 1);
        }
        if(!no){
            if((strcmp(p, "six") == 0)||(strcmp(p, "sxi") == 0)||(strcmp(p, "xis") == 0)||(strcmp(p, "xsi") == 0)||(strcmp(p, "isx") == 0)||(strcmp(p, "ixs") == 0)){
                printf ("YES\n");
            }
            else printf ("NO\n");

        }
        else printf ("NO\n");
        
    }
}