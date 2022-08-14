#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int p=1;
    int x=0,y=0,m=50;
    char s1,s2,s3,s4;
    while(1){
        system("CLS");
        printf("\n\n\n\n");
        if(m<=50 && p==0){
            s1='|',s2='-',s3='-',s4='>';
            m++;
            if(m==50)p==1;
        }
        if(m>=0 && p==1){
            s1='<',s2='-',s3='-',s4='|';
            m--;
            if(m==0)p=0;
        }
        for(int y=0 ; y<=1 ; y++){
            for(x=0 ; x<=50 ; x++){
                if(y==x-m){
                        printf("%c%C%C%C",s1,s2,s3,s4);
                }
                else
                    printf(" ");
             }
            printf("\n");
        }
    }

   return 0;
}
