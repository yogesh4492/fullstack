#include<stdio.h>
int main(){//6,28,496,8128 perfect numbers
	int num,i,sum=0;
	printf("\n enter the number =");
	scanf("%d",&num);
	for(i=1;i<=num/2;i++){
		if(num%i==0){
			sum=sum+i;
		
		}
	}
	if(sum==num){
		printf("\n %d is a perfect number",num);
	}
	else{
		printf("\n %d is not a perfect number",num);
	}
	return 0;
}
