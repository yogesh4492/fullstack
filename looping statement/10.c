#include<stdio.h>
int main(){
	int col,row,i,j;
	printf("\n enter row=");;
	scanf("%d",&row);
	printf("\n enter col=");;
	scanf("%d",&col);
	for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
