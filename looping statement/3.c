#include<stdio.h>
int main()
{
	int num,flag=1,i;
	printf("\n enter the value of number=");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		printf("\n %d is a prime number",num);
	}
	else
	{
		printf("\n %d is not a prime number",num);
	}
	return 0;
}
