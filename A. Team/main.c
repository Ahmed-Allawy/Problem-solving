#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);
    while(n--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if((a+b+c)>=2) count++;
    }
    printf("%d",count);
}
