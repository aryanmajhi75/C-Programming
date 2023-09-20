#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i;
	int *p;
	printf("\nEnter number of values");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for (i=0;i<n;++i){
		printf("Enter value %d",i+1);
		scanf("%d",&p[i]);
	}
}
