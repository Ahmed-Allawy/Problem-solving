
////     https://codeforces.com/group/T3p02rhrmb/contest/325686/problem/A
#include<stdio.h>

void quickSort(int [],int ,int);
int partition(int [] , int , int);

int main(){
	int n;
	scanf("%d",&n);
	int cubes[n+1];
	for(int i=0;i<n;i++){
		scanf("%d",&cubes[i]);
	}
	quickSort(cubes,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d ",cubes[i]);
	}
	return 0;		
}
int partition(int array[], int start, int end){
	int pivot = array[end];
	int i= start-1;
	for(int j=start; j<end; j++){
		if(array[j]<=pivot){
			i++;
			int temp=array[i];
			array[i]=array[j];
			array[j]=temp;
		}
	}
	int temp=array[i+1];
	array[i+1]=array[end];
	array[end]=temp;
	return i+1;
}
void quickSort(int array[], int start , int end){
	if(start<end){
		int partitionIndex = partition(array, start, end);
		quickSort(array, start, partitionIndex-1);
		quickSort(array, partitionIndex+1, end);
	}
}
