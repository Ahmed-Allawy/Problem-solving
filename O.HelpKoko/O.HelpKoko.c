#include<stdio.h>
#include<math.h>
#include<stdbool.h>

#define sonik ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPrime(int number){
	for(int i=2; i*i<=number; ++i){
		if(number%i==0){
			return false;
			break;
		}
	}
	return true;
}

int operation(int number, int operation, int p){
	if(operation==1)
		if(number==0) return 0;
		else if(number==1) return -1;
		else if(number==2) return 0;
		else
			if(isPrime(number))
				return 5;
			else return -1;

	else 
		return 0;
}

int  main(){

	int listSize, power;
	int arrayNumbers[listSize+1];
	int arrayOperations[listSize+1];

	scanf("%d %d",&listSize, &power);

	for(int i=0; i<listSize; ++i)
		scanf("%d",&arrayNumbers[i]);

	for(int i=0; i<listSize; ++i)
		scanf("%d",&arrayOperations[i]);

	for(int i=0; i<listSize; ++i)
			printf("%d ",operation(arrayNumbers[i], arrayOperations[i], power));
	
	
}
