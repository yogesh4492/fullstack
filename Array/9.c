#include<stdio.h>
int main(){
	int a[100],i,size,element,index,flag=0;
	printf("\n enter the size of array=");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("\n enter the element in a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n enter the element you want to search=");
	scanf("%d",&element);
	for(i=0;i<size;i++){
		if(element==a[i]){
			flag=1;
			index=i;
		    break;
		}
	}
	if(flag==1){
		printf("\n %d element is present in index %d",element,index);
	}
	else{
		printf("\n %d element not present in array",element);
	}
	return 0;
}
