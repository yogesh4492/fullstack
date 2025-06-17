#include<stdio.h>
int main(){
	int num,i;
	printf("\n enter value of num=");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		
	  if(i%2==0){
	  	continue;
	  }
	  printf("%d",i);
	  printf("\n");
	}
	return 0;
}
