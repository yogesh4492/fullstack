#include<stdio.h>
//with return type without argument
float div();
int main(){
	
	float result=div();
	printf("\n the division is=%.2f",result);
	return 0;
}
float div(){
	int num1,num2;
	printf("\n enter the value in num1=");
	scanf("%d",&num1);
	printf("\n enter the value in num2=");
	scanf("%d",&num2);
	float ans=(float)num1/(float)num2;
	return ans;
}
