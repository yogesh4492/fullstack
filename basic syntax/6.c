#include<stdio.h>
int main(){
	int num1,num2;
	printf("\n enter the value in num1=");
	scanf("%d",&num1);
	printf("\n enter the value in num2=");
	scanf("%d",&num2);
	//type casting
	float ans= (float)num1/(float)num2;
	printf("\n division=%.2f",ans);
	return 0;
}
