//Write a program in c language to read name, register no and marks in 3 subjects of 10 students and display the details in a tabular form.
#include<stdio.h>
#include<stdlib.h>


int main(){
	char sName[10][20];
	int RegNo[10];
	float marks[10][3];
	for(int i=0;i<2;++i){
		fflush(stdin);
		printf("\nEnter your name : ");
		scanf("%s",&sName[i]);
		fflush(stdin);
		printf("\nEnter your register number : ");
		scanf("%d",&RegNo[i]);	
		for (int j=0;j<3;++j)
		{
				printf("\nEnter your marks in Subject %d : ",j);
				scanf("%f",&marks[i][j]);
			
		}
	}
	printf("\n=======================================================================");
	printf("\nName		Register Number		Marks1	Marks2	Marks 3");
	printf("\n=======================================================================");
	for(int i=0;i<2;++i){	
		printf("\n%s   \t%d   \t%.2f   \t%.2f   \t%.2f",sName[i],RegNo[i],marks[i][0],marks[i][1],marks[i][2]);
		printf("\n-----------------------------------------------------------------------");
	}
} 
