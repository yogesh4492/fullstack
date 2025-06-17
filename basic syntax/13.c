#include<stdio.h>
int main(){
	int a,b;
	printf("\n enter value of a=");
	scanf("%d",&a);
	printf("\n enter value of b=");
	scanf("%d",&b);
	
	int c;
	c=a>b?a:b;
	printf("\n greater value is =%d",c);
	return 0;
}
