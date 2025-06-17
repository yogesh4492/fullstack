#include<stdio.h>
int main(){
	int a[10][10],b[10][10],ans[10][10];
	int i,j,k,size;
	printf("\n enter the size of array=");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("\n enter the element of a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("\n enter the element of b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<size;i++){
		
		for(j=0;j<size;j++){
			ans[i][j]=0;
			for(k=0;k<size;k++){
				ans[i][j]= ans[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	
	printf("\n array element of a:\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n array element of b:\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	printf("\n array element of a:\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
