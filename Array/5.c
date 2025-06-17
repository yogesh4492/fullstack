#include<stdio.h>
int main(){
	
	int a[100],size,i;
	printf("\n enter the size of an array=");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("\n enter the element of an array[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++){
		printf("\n %d",a[i]);
	}
	
	
	return 0;
}
