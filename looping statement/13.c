/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include<stdio.h>
int main(){
	int row,i,j;
	printf("\n enter row values=");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
