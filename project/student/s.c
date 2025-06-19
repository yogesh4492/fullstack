#include<stdio.h>
struct student{
	int roll;
	char name[50];
	float percentage;
	char grade;
	
};

char calgrade(float percentage){
	if(percentage>=80) {return 'A';
	}
	else if(percentage>35 &&percentage<80){
		return 'B';
	}
	else{
		return 'C';
	}
}
void add(int size){
	struct student s[50];
	FILE *fp;
//	int temp=1;
    int id,i;
    fp=fopen("Student1.txt","a");
   for(i=0;i<size;i++){
   	printf("\n enter the roll no of student[%d]=",i+1);
   	scanf("%d",&s[i].roll);
   	
   	printf("\n enter the Name of student[%d]=",i+1);
   	scanf("%s",&s[i].name);
   	printf("\n enter the percentage of student[%d]=",i+1);
   	scanf("%f",&s[i].percentage);
   	s[i].grade=calgrade(s[i].percentage);

	
		fprintf(fp,"student id= %d\n",i+1);
		fprintf(fp,"Roll no=%d\n",s[i].roll);
		fprintf(fp,"Name =%s\n",s[i].name);
		fprintf(fp,"Percentage= %.2f\n",s[i].percentage);
		fprintf(fp,"Grade= %c\n",s[i].grade);
		fprintf(fp,"\n-----------------------------------------------------\n");
	//	temp++;
}
	fclose(fp);
}
int main(){
	int size;
	printf("\n enter the number of student=");
	scanf("%d",&size);
	add(size);
	return 0;
}
