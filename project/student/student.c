#include<stdio.h>
struct student{
	int roll;
	char name[50];
	float percentage;
	char grade;
	
};
int main(){
	struct student s[50];
    int size,id,i;
    printf("\n 1.add new student.");
    printf("\n 2.display all student data.");
    printf("\n 3.display paarticular student by roll.");
    printf("\n 4.update student detail.");
    printf("\n 5.delete student.");
   printf("\n enter the number of student=");
   scanf("%d",&size);
   for(i=0;i<size;i++){
   	printf("\n enter the roll no of student[%d]=",i+1);
   	scanf("%d",&s[i].roll);
   	printf("\n enter the Name of student[%d]=",i+1);
   	scanf("%s",&s[i].name);
   	printf("\n enter the percentage of student[%d]=",i+1);
   	scanf("%f",&s[i].percentage);
   	if(s[i].percentage>=80){
   		s[i].grade='A';
	   }
	else if(s[i].percentage>35 && s[i].percentage<80){
	   	s[i].grade='B';
	}
	else{
		s[i].grade='C';
	}}
	for(i=0;i<size;i++){
		printf("\n student id=%d",i+1);
		printf("\n roll no=%d",s[i].roll);
		printf("\n name=%s",s[i].name);
		printf("\n percentage=%.2f",s[i].percentage);
		printf("\n grade=%c",s[i].grade);
		printf("\n -----------------------------------------------------------------------------------------\n");
	}
   	
   

   
   

	return 0;
}
