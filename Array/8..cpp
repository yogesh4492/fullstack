#include<stdio.h>
int main(){
	int a[100],i,size,index;
	printf("\n enter the size of array=");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("\n enter the element in a[%d]=",i);
		scanf("%d",a[i]);
	}
	printf("\n enter index do you want to search=");
	scanf("%d",&index);
	if(index>=0 && index<size){
		printf("\n element present  in index %d is=%d",index,a[index]);
	}
	else{
		printf("\n you enter invalid index.";)
	}
	
	return 0;
}
