#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
methodtwo();

}
void methodone(){
    char a[1000];
    gets(a);
    for(int i=strlen(a)-1;i>=0;i--)
        printf("%c",a[i]);

    }
    void methodtwo(){
        int number;
        scanf("%d",&number);
        int reverse;
        while(number>0){
            reverse=number%10;
            printf("%d",reverse);
            number/=10;
        }

    }





