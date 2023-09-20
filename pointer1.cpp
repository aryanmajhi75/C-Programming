#include<stdio.h>

int main(){
	const int *p;
	int x=10,y=20;
	p=&x;
	printf("\np=&x : %d",&p);
	p=&y;
	printf("\np=&y : %d",&p);
//	*p=100;
//	printf("\n*p=100 : %d",&p);
}
