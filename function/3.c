#include<stdio.h>
//without return type with argument
void subtraction(int n1,int n2);
int main(){
	int num1,num2;
	printf("\n enter the  value in num1=");
	scanf("%d",&num1);
	printf("\n enter the value in num2=");
	scanf("%d",&num2);
	subtraction(num1,num2);
	return 0;
}
void subtraction(int n1,int n2){
	int ans;
	ans=n1-n2;
	printf("\n the subtraction =%d",ans);
}
