//Create a menu driven program in c language to implement a calculator with 5 options 1. Addition 2. Subtraction 3. Division 4. Multiplication 5. Exit
#include <stdio.h>
#include <stdlib.h>

int main(){
	int opt;
	float num1,num2,sum=0;
	do{
		printf("\n\nMENU \n\n1. Addition \n2. Subtraction \n3. Division \n4. Multiplication \n5. Exit");
		printf("\nWhat would u like to do? (1/2/3/4/5) : ");
		scanf("%d",&opt);
		switch(opt){
			case 1: 
				printf("Number 1 :");
				scanf("%f",&num1);
				printf("Number 2 :");
				scanf("%f",&num2);
				sum=num1+num2;
				printf("The sum of %.1f + %.1f : %.1f",num1,num2,sum);
				break;
				
			case 2: 
				printf("Number 1 :");
				scanf("%f",&num1);
				printf("Number 2 :");
				scanf("%f",&num2);
				sum=num1-num2;
				printf("The difference of %.1f - %.1f : %.2f",num1,num2,sum);
				break;
				
			case 3: 
				printf("Numerator :");
				scanf("%f",&num1);
				printf("Denominator :");
				scanf("%f",&num2);
				if(num2==0){
					printf("Division by 0 is not defined!");
					
				}
				else{
					sum=num1/num2;
					printf("The quotient of %.1f / %.1f : %.2f",num1,num2,sum);
				}
				break;
				
			case 4: 
				printf("Number 1 :");
				scanf("%f",&num1);
				printf("Number 2 :");
				scanf("%f",&num2);
				sum=num1*num2;
				printf("The product of %.1f * %.1f : %.2f",num1,num2,sum);
				break;
				
			case 5:
				printf("Thank You!");
				exit(0);
				break;
				
			default:
				printf("Invalid Option");
				break;
		}
	}while(opt!=5);
	return 0;
}
