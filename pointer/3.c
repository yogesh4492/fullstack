#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5},i;
	
	int *ptr= &a;
	printf("\n address of an array=%p",ptr);
    for(i=0;i<5;i++){
    	printf("\n Address of a[%d]= %p",i,&a[i]);
    	
	}
	for(i=0;i<5;i++){
		
    	printf("\n value of a[%d]= %d",i,a[i]);
    	
	}
	
	return 0;
}
