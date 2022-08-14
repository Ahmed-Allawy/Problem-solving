#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s = pow(2,n/2);
    if(n%2==0)printf("%d\n",s);
    else printf("0\n");
}
