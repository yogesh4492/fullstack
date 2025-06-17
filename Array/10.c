#include<stdio.h>
int main(){//descending order
	int a[100],size,i,j;
	printf("\n enter the size of array=");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("\n enter the element in a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n original array=");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	int temp;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(a[i]<a[j]){
			  temp=a[i];
			  a[i]=a[j];
			  a[j]=temp;	
			}
		}
	}
	printf("\n sorted array =");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
