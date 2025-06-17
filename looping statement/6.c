#include<stdio.h>
//#include<math.h>
 
int main(){
	int num,i,rem,rev=0;
	printf("\n enter value in number=");
	scanf("%d",&num);
	int temp=num;
	while(num!=0){
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
		
	}
	if(temp==rev)
	
	{printf("\n %d is a palindrome number",temp);
	
	}
	else{
		printf("\n %d is not a palindrome number",temp);
	}
	return 0;
}
