
/*
A
B C
C D E
D E F G
E F G H I
*/ 
#include<stdio.h>
int main(){
	 int row,i,j,k=65,l;
	 printf("\n enter row value=");
	 scanf("%d",&row);//3
	 for(i=1;i<=row;i++){//a
	 	l = k;
	 	for(j=1;j<=i;j++){
	 		
	 		printf("%c ",l++);
		 }
		 printf("\n");
		 k++;
	 }

	return 0;
}
