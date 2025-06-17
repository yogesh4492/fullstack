/*Single-digit Armstrong numbers: 1, 2, 3, 4, 5, 6, 7, 8, 9
Three-digit Armstrong numbers: 153, 370, 371, 407
Four-digit Armstrong numbers: 1634
*/
#include<stdio.h>
#include<math.h>
int main(){
	int num,i,digit=0,rem,power,sum=0;
	printf("\n enter the number =");
	scanf("%d",&num);
	int temp=num;
	int copy=num;
	while(num!=0){
		num=num/10;
		digit++;
	}
	for(i=1;i<=digit;i++){
		rem=temp%10;
		power=pow(rem,digit);
		sum=sum+power;
		temp=temp/10;
	}
	if(sum==copy){
		printf("\n %d is an armstrong number",copy);
	}
	else{
		printf("\n %d is not an armstrong number",copy);
	}
	return 0;
}
