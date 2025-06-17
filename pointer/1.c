#include<stdio.h>
int main(){
	int a=10,b=20;
	int *ptr=&a;
	printf("\n value of a=%d",a);
	printf("\n value of a=%d",*ptr);
	printf("\n Address of a=%p",&a);
	printf("\n Address of a=%p",ptr);
	
	printf("\n value of b=%d",b);
	return 0;
	
}
