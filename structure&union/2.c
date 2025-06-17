#include<stdio.h>
struct student{
	int roll;
	float per;
	char name[100];
	char grade;
	
};
int main(){
	struct student s[50];
	int size,i;
	printf("\n enter the number of student=");
	scanf("%d",&size);
	for(i=0;i<size;i++)
   {
	 printf("\n enter Your roll no=");
	 scanf("%d",&s[i].roll);
	 printf("\n enter your Name=");
	 scanf("%s",&s[i].name);
	 printf("\n enter your percentage=");
	 scanf("%f",&s[i].per);
	 printf("\n enter your grade=");
	 scanf(" %c",&s[i].grade);
	}
	
	for(i=0;i<size;i++){
		printf("\n Roll no of student[%d]=%d",i+1,s[i].roll);
		printf("\n Name of student[%d]=%s",i+1,s[i].name);
		printf("\n percentage of student[%d]=%.2f",i+1,s[i].per);
		printf("\n grade  of student[%d]=%c",i+1,s[i].grade);
		printf("\n ");
		printf("\n ");
	}	
	return 0;
}
