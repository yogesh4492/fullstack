#include<stdio.h>
int main(){
	int num;
	printf("\n enter year =");
	scanf("%d",&num);
	if(num%4==0)
	{
		printf("%d year is leap year",num);
	}
	else
	{
		printf("\n %d year is not a leap year",num);
	}
	return 0;
}

