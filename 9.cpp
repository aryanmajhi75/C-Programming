//Write a program in c language to find the highest number of an array of n elements using function
#include <stdio.h>
#include <stdlib.h>

void highest(int array[],int n){
	int max=array[0];
	int i;
	for(i=1;i<n;++i){
		if(max<array[i]){
			max=array[i];
		}
	}
	printf("--------------------------\n");
	printf("The highest element is %d",max);
	printf("\n--------------------------");
}

int main(){
	int ar[100],n,i=0;
	
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	if(n>100){
		printf("------------------------\n");
		printf("| ERROR! Limit exceded |");
		printf("\n------------------------");
	}
	else{
		for (i=0;i<n;++i){
			printf("=> ");
			scanf("%d",&ar[i]);
		}
		highest(ar,n);
	}
}
