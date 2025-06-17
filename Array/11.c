#include<stdio.h>
int main(){
	int a[100],i,size;
	printf("\n enter the size of an array=");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("\n enter the element of a[%d]=",i);
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int min=a[0];
	for(i=0;i<size;i++)
	if(a[i]>max){
		max=a[i];
	}
	for(i=0;i<size;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("\n maximum element =%d",max);
	printf("\n minimum element =%d",min);
	
	return 0;
}
