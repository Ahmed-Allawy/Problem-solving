#include <stdio.h>
#include <stdlib.h>

int main()
{
   int NOEmpl=0,count=0,n=0;
   scanf("%d",&NOEmpl);
   n=NOEmpl;
   for(int i=1;i<NOEmpl;++i){
        n--;
        if(n%i==0){
            count++;
        }
   }
   printf("%d\n",count);
}
