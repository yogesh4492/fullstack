/*
    *
   * *
  * * *
 * * * *
* * * * *
*/
#include<stdio.h>
int main(){
	int row,i,j,k;
	printf("\n enter row number=");
	scanf("%d",&row);
	int spc =row-1;
	for(i=1;i<=row;i++){
		for(k=1;k<=spc;k++){
			printf(" ");
		}
		
		for(j=1;j<=i;j++){
		   printf("* ");	
		}
		spc--;
		printf("\n");
	}
	return 0;
}

