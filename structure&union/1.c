#include<stdio.h>
struct student{
	int roll;
	float percentage;
	char name[100];
	char grade;
};
int main(){
	
	struct student s,s1;
	s.roll=101;
	s.percentage=89.56;
	s.grade='a';
	
	printf("\n roll no=%d",s.roll);
	printf("\n percentage=%.2f",s.percentage);
	printf("\n grade=%c",s.grade);
	
	printf("\n enter the roll no.=");
	scanf("%d",&s1.roll);
	printf("\n enter your percentage=");
	scanf("%f",&s1.percentage);
	printf("\n enter your name=");
	scanf("%s",&s1.name);
	printf("\n enter grade=");
	scanf(" %c",&s1.grade);
	printf("\n roll no=%d",s1.roll);
	printf("\n percentage=%.2f",s1.percentage);
	printf("\n name is=%s",s1.name);
	printf("\n grade is =%c",s1.grade);
	
	return 0;
}
