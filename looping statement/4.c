#include<stdio.h>
int main(){
	int num,fact=1,i;
	printf("\n enter value of number=");
	scanf("\n %d",&num);
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("\n factorial of %d is %d",num,fact);
	return 0;
}
