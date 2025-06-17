#include<stdio.h>
//without return type without argument
void multi();
int main(){
	multi();
	return 0;
}
void multi(){
	int n1,n2;
	printf("\n enter the value in n1=");
	scanf("%d",&n1);
	printf("\n enter the value in n2=");
	scanf("%d",&n2);
	int ans;
	ans=n1*n2;
	printf("\n the multiplication is=%d",ans);
}
