#include<stdio.h>
//with return type with argument
int add(int n1,int n2);//declaration
int main(){
	int num1,num2;
	printf("\n enter the value in num1= ");
	scanf("%d",&num1);
	printf("\n enter the value in num2= ");
	scanf("%d",&num2);
	
	int result=add(num1,num2);
	printf("\n the addition is =%d",result);
	return 0;
}
int add(int n1,int n2)//definition
{
	
	int ans;
	ans=n1+n2;
	return ans;
}
