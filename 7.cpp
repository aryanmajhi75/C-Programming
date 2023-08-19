//Write a program in c to read 10 numbers and print only the prime numbers
#include <stdio.h>

int main(){
	int array[10],i,j;
	printf("Enter 10 numbers\n");
	for(i=0;i<10;i++){
		printf("->");
		scanf("%d",&array[i]);
	}
	for(i=0;i<10;++i){
		for(j=2;j<=array[i]/2;++j){
			if(array[i]%j!=0){
				printf(" %d",array[i]);
			}
		}
	}
}
