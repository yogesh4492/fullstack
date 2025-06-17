#include<stdio.h>
int main(){
	int a[100],i,size,sum=0;
	printf("\n enter the array size=");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("enter the element in a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++){
		sum=sum+a[i];
	}
	printf("\n addition of elements=%d",sum);
	return 0;
}
