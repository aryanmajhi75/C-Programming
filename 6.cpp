//Write a program to read two strings and if the string s are having equal length display the message 'String are equal' with length else display 'Strings are not equal' with length
#include <stdio.h>
#include<stdlib.h>

int main(){
	char str1[100], str2[100];
	int x=0,y=0;
//	int i=0,j=0;
	printf("\nEnter first string (max 100) : ");
	scanf("%s",&str1);
	fflush(stdin);
	printf("\nEnter second string (max 100) : ");
	scanf("%s",&str2);
//	for (i = 0; str1[i] != '\0'; ++i);
//	for (j = 0; str2[j] != '\0'; ++j);
	while (str1[x]!='\0'){
		x++;
	}
	while (str2[y]!='\0'){
		y++;
	}
	if (i==j){
		printf("\nThe length is same : %d",x);
		printf("\nString 1 : %s",str1);
		printf("\nString 2 : %s",str2);
	}
	else{
		printf("\nThe lenght is different");
		printf("\nString 1 : %s",str1);
		printf("\nLength of String 1 : %d",x);
		printf("\nString 2 : %s",str2);
		printf("\nLength of String 2 : %d",y); 
	}
}
