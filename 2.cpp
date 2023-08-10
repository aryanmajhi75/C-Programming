#include<stdio.h>
class Customer{
	public:
	long int accountNumber;
	float balance;
	short int age;
	char gender;
	void showCustomerDetails(){
		printf("\n%ld",accountNumber);
		printf("\t%.2f",balance);
		printf("\t%hd",age);
		printf("\t%c",gender);
	}
};
int main(){
	Customer c[5];
	for(int i=0;i<2;++i){
		printf("Enter Account Number : \n");
		scanf("%ld",&c[i].accountNumber);
		printf("Enter Balance : \n");
		scanf("%f",&c[i].balance);
		printf("Enter Age : \n");
		scanf("%hd",&c[i].age);
		fflush(stdin);
		printf("Enter Gender (M/F) : \n");
		scanf("%c",&c[i].gender);
	}
	printf("account number \t balance	age   gender\n____________________________________________________________");
	for(int i=0;i<2;++i){
		c[i].showCustomerDetails();
	}
	return 0;
}
//	printf("Enter Account Number : \n");
//	scanf("%ld",&c1.accountNumber);
//	printf("Enter Balance : \n");
//	scanf("%f",&c1.balance);
//	printf("Enter Age : \n");
//	scanf("%hd",&c1.age);
//	fflush(stdin);
//	printf("Enter Gender (M/F) : \n");
//	scanf("%c",&c1.gender);
//	printf("Enter Account Number : \n");
//	scanf("%ld",&c2.accountNumber);
//	printf("Enter Balance : \n");
//	scanf("%f",&c2.balance);
//	printf("Enter Age : \n");
//	scanf("%hd",&c2.age);
//	fflush(stdin);
//	printf("Enter Gender (M/F) : \n");
//	scanf("%c",&c2.gender);	
//	printf("Enter Account Number : \n");
//	scanf("%ld",&c3.accountNumber);
//	printf("Enter Balance : \n");
//	scanf("%f",&c3.balance);
//	printf("Enter Age : \n");
//	scanf("%hd",&c3.age);
//	fflush(stdin);
//	printf("Enter Gender (M/F) : \n");
//	scanf("%c",&c3.gender);
//	printf("Enter Account Number : \n");
//	scanf("%ld",&c4.accountNumber);
//	printf("Enter Balance : \n");
//	scanf("%f",&c4.balance);
//	printf("Enter Age : \n");
//	scanf("%hd",&c4.age);
//	fflush(stdin);
//	printf("Enter Gender (M/F) : \n");
//	scanf("%c",&c4.gender);
//	printf("Enter Account Number : \n");
//	scanf("%ld",&c5.accountNumber);
//	printf("Enter Balance : \n");
//	scanf("%f",&c5.balance);
//	printf("Enter Age : \n");
//	scanf("%hd",&c5.age);
//	fflush(stdin);
//	printf("Enter Gender (M/F) : \n");
//	scanf("%c",&c5.gender);	
//	c2.showCustomerDetails();
//	c3.showCustomerDetails();
//	c4.showCustomerDetails();
//	c5.showCustomerDetails();
