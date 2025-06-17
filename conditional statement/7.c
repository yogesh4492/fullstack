#include<stdio.h>
int main(){
	int n1,n2;
	printf("\n enter the value in n1=");
	scanf("%d",&n1);
	printf("\n enter the value in n2=");
	scanf("%d",&n2);
	if(n1>n2){
		printf("%d is biggest number",n1);
	}
	else if(n1==n2){
		printf("\n both value are equal");
	}
	else{
		printf("\n %d is biggest number",n2);
	}
	return 0;
}
