#include<stdio.h>
int main(){
	int num1,num2,ans;
	
	printf("enter value in num1=");
	scanf("%d",&num1);
	
	printf("enter value in num2=");
	scanf("%d",&num2);
	ans=num1+num2;
	printf("\n the addition of %d and %d is= %d",num1,num2,ans);
	
	printf("\nenter value in num1=");
	scanf("%d",&num1);
	
	printf("\nenter value in num2=");
	scanf("%d",&num2);
	
	ans=num1-num2;
    printf("\n the subtraction of %d and %d is= %d",num1,num2,ans);
	
	printf("\nenter value in num1=");
	scanf("%d",&num1);
	
	printf("\nenter value in num2=");
	scanf("%d",&num2);
	
	//ans=num1*num2;
    printf("\n the multiplication of %d and %d is= %d",num1,num2,num1 * num2);
	printf("\n enter the value in num1=");
	scanf("%d",&num1);
	
	printf("\n enter the value in num2=");
	scanf("%d", &num2);
	printf("\n the division of %d and %d is= %d",num1,num2,num1 /num2);
	printf("\n enter the value in num1=");
	scanf("%d",&num1);
	
	printf("\n enter the value in num2=");
	scanf("%d", &num2);
	printf("\n the remaindor of %d and %d is= %d",num1,num2,num1%num2);
		


	return 0;
}
