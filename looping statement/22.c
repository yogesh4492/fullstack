#include<stdio.h>
int main(){
	int num=5,flag=1,count=0,i;
	for(i=2;i<=num/2;i++){
		count++;
		if(num%i==0){
			
			flag=0;
			break;
		}
	}
	printf("\n count=%d",count);
	if(flag==1){
		printf("\n %d is a prime number.",num);
	}
	else{
		printf("\n %d is a  not prime number.",num);
	}
	return 0;
}
