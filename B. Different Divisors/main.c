#include <stdio.h>
#include <stdlib.h>
void methodone(){
int t;
    scanf("%d",&t);
    while(t>0){
            int d ,c=0,s=0,i=4;
            scanf("%d",&d);
            while(i>=4){
                s=0;
                c=1-d;
                for(int j=1;j<=i;j++){
                    if(i%j==0){
                        if((j-c)>=d){
                            c=j;
                            s=s+1;
                        }
                        else break;
                    }
                }
                if(s==4) {
                    printf("%d\n",i);
                    break;
                }
            i++;
            }
        t--;
    }
}
void methodtwo(){
int t,answer,count,m=1;
scanf("%d",&t);
while(t--){
    int d,i=0,j=1;
    scanf("%d",&d);
    int divisore2=1+d , divisore3;
    answer=0;
    while(m>0){
    while(j>0 && divisore2>3){
            if(divisore2%2==0 || divisore2%3==0)
                divisore2=1+d+i;
            else j=0;
        i++;
    }
    divisore3=divisore2+d+i;
    i=0;
    j=1;
    while(j>0 && divisore3>3){
            if(divisore3%2==0 || divisore3%3==0)
                divisore3=divisore2+d+i;
            else j=0;
        i++;
    }
    answer=divisore2*divisore3;
    count=0;
    while(answer>0){
        if((divisore2*divisore3)%answer==0){
            count++;
        }
        answer--;
        }
    if(count==4){
        printf("%d\n",divisore2*divisore3);
        m=0;
    }
    }
}
}


int numberWith4Divisores(int number){
    int count=0;
    for(int i=number;i>0;i--){
        if(number%i==0) count++;
    }
    return count;
}
/////////////////////
int isPrime(int number){
    for(int i=number-1 ;i>1;i--){
        if(number%i==0)
            return 1;
    }
    return 2;
}
void methodeThree(){
    int t;
    scanf("%d",&t);
    while(t--){
        int d;
        scanf("%d",&d);
        int divisore2=1+d,divisore3=divisore2+d;
        while(numberWith4Divisores(divisore2*divisore3)!=4){
                while(isPrime(divisore2)==1){
                    divisore2=divisore2+1;
                }
                divisore3=divisore2+d;
                while(isPrime(divisore3)==1){
                    divisore3=divisore3+1;
                }
        }
        printf("%d\n",divisore2*divisore3);
    }
}
int main()
{
    methodeThree();

}
