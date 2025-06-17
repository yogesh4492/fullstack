#include<stdio.h>
int main(){
	
	int a[100],size,i,j;
	printf("\n enter the size of an array=");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("\n enter the element of an array=");
		scanf("%d",&a[i]);
	}
	for(i=size-1;i>=0;i--){
		printf("\n%d",a[i]);
	}
	return 0;
}
