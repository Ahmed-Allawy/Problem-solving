#include <stdio.h>
#include <stdlib.h>

void fizzBuzz(int n) {
for(int i=1;i<=n;i++){
if (i%3==0 && i%5==0)printf("FizzBuzz\n");
else if (i%3==0 && i%5!=0)printf("Fizz\n");
else if (i%5==0 && i%3!=0)printf("Buzz\n");
else printf("%d\n",i);
}
}
void ifstate(){
int a=3;
if(a==3)printf("if\n");
else if (a<=3)printf("else if\n");
else printf("else");


}

int main()
{
ifstate();

int n;
scanf("%d",&n);
printf("\n");
fizzBuzz(n);

}
