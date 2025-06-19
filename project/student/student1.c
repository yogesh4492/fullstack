#include<stdio.h>
struct student{
	int roll;
	char name[50];
	float percentage;
	char grade;
	
};

int main(){
	struct student s[50];
	FILE *fp;
    int size,id,i;
    fp=fopen("Student.txt","a");
    printf("\n 1.add new student.");
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
	}

	}
	for(i=0;i<size;i++){
		fprintf(fp,"student id= %d\n",i+1);
		fprintf(fp,"Roll no=%d\n",s[i].roll);
		fprintf(fp,"Name =%s\n",s[i].name);
		fprintf(fp,"Percentage= %.2f\n",s[i].percentage);
		fprintf(fp,"Grade= %c\n",s[i].grade);
		fprintf(fp,"\n-----------------------------------------------------\n");
	
		printf("\n student id=%d",i+1);
		printf("\n roll no=%d",s[i].roll);
		printf("\n name=%s",s[i].name);
		printf("\n percentage=%.2f",s[i].percentage);
		printf("\n grade=%c",s[i].grade);
		printf("\n -----------------------------------------------------------------------------------------\n");
		
	}	
	fclose(fp);
	return 0;
}
