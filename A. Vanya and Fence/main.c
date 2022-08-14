#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0;
   int NumberOfFriends=0;
   int height=0;
   scanf("%d %d",&NumberOfFriends,&height);
   for(int i=0;i<NumberOfFriends;++i){
    int heightOfPersone=0;
    scanf("%d",&heightOfPersone);
    if(heightOfPersone>height) count+=2;
    else count++;
   }
   printf("%d",count);
}
