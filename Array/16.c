#include<stdio.h>
int main(){
	int a[10][10],at[10][10];
	int row,col,i,j;
	printf("\n enter row number=");
	scanf("%d",&row);
	printf("\n enter row number=");
	scanf("%d",&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("\n enter the element  in a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			at[j][i]=a[i][j];
	
		}
	}
	printf("\n original array.\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n Transposed array.\n");
	for(i=0;i<col;i++){
		for(j=0;j<row;j++){
			printf("%d ",at[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
