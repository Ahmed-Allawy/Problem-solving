#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void methodeOne(){
int n;
    scanf("%d", &n);
      for(int i=1;i<n+1;i++){
            for(int j=0;j<i;j++){
                   printf("%d ",n-j);
            }
            for(int k=0;k<n-i;k++)printf("%d ",n-i+1);
            for(int m=0;m<n-i;m++) printf("%d ",n-i+1);
            for(int l=i-1;l>0;l--)printf("%d ",n-l+1);
            printf("\n");
       }
      for(int i=n;i>1;i--){
          for(int j=0;j<i-1;j++){
                 printf("%d ",n-j);
          }
          for(int k=0;k<n-i+1;k++)printf("%d ",n-i+2);
          for(int m=0;m<n-i;m++) printf("%d ",n-i+2);
          for(int l=i;l>1;l--)printf("%d ",n-l+2);
          printf("\n");
      }
}
void methodeTwo(){
int n;
scanf("%d",&n);
for(int i=0;i<2*n-1;i++){
    for(int j=0;j<2*n-1;j++){
        printf("%d ",((i<n)?((j<n)?(i<j?(n-i):(n-j)):(i<(2*n-j-1)?(n-i):(n-(2*n-j)+2))):
               ((j<n)?((2*n-i-2)<j?(n-(2*n-i)+2):(n-j)):((2*n-i)<(2*n-j)?(n-(2*n-i)+2):(n-(2*n-j)+2)))));
    }
    printf("\n");
}
}
int main()
{
methodeTwo();

    return 0;
}
