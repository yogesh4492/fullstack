#include<stdio.h>
int main(){
	int i;
	int a[5];
	for(i=0;i<5;i++){
		printf("\n enter the element a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++){
		printf("\n %d ",a[i]);
	}
	
	return 0;
}
