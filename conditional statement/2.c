#include<stdio.h>
int main(){
	char ch='%',choice;
	int num1, num2;
	up :
	printf("\n enter the value in num1=");
    scanf("%d",&num1);
	printf("\n enter the value in num2=");
    scanf("%d",&num2);
    
    printf("\npress '+' for addition "); 
	printf("\npress '-' for substraction  "); 
	printf("\npress '*' for multiplication "); 
	printf("\npress '/' for divison "); 
	printf("\npress '%c' for remainder ",ch);
	
	printf("\n enter your choice=");
	scanf(" %c",&choice);
	float c=(float)num1/(float)num2;
	
	switch(choice)
	{
	
		case '+':
			printf("\n the addition of %d and %d is = %d",num1,num2,num1+num2);
			break;
		case '-':
			printf("\n the subtraction of %d and %d is = %d",num1,num2,num1-num2);
			break;
		case '*':
			printf("\n the multiplication of %d and %d is = %d",num1,num2,num1*num2);
			break;
		case '/':
			printf("\n the divison of %d and %d is = %.2f",num1,num2,c);
			break;
		case '%':
			printf("\n the remainder of %d and %d is = %d",num1,num2,num1%num2);
			break;
		defaut:
			printf("enter correct input");
}
    printf("\nenter 'y'for continue or enter 'n'for exit :");
    scanf(" %c",&choice);
    if(choice=='y' || choice=='Y')
    {
     goto up;
     }
	return 0;
}
