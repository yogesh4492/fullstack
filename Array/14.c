#include<stdio.h>
int main(){
   int a[10][10],b[10][10],ans[10][10];
   int row,col,i,j;
   printf("\n enter the row number=");
   scanf("%d",&row);
   printf("\n enter the col number=");
   scanf("%d",&col);
   
   for(i=0;i<row;i++){
   	for(j=0;j<col;j++){
   		printf("\n enter the element of a[%d][%d]=",i,j);
   		scanf("%d",&a[i][j]);
	   }
   }
   for(i=0;i<row;i++){
   	for(j=0;j<col;j++){
   		printf("\n enter the element of b[%d][%d]=",i,j);
   		scanf("%d",&b[i][j]);
	   }
   }
   char ch;
   up:
   printf("\n press'+' for adddition");
   printf("\n press'-' for Subtraction");
   printf("\n enter your choice=");
   scanf(" %c",&ch);
   switch(ch){
      case '+':
        for(i=0;i<row;i++){
   	      for(j=0;j<col;j++){
   		   ans[i][j]=a[i][j]+b[i][j];
   	     }
         }
         break;
      case '-':
      	for(i=0;i<row;i++){
   	      for(j=0;j<col;j++){
   		   ans[i][j]=a[i][j]-b[i][j];
   	     }
         }
         break;
     }
     
      	
   printf("\n Array a=\n");
   
   for(i=0;i<row;i++){
   	for(j=0;j<col;j++){
   		printf("%d ",a[i][j]);
	   }
	   printf("\n");
   }
   printf("\n Array b=\n");
   
   for(i=0;i<row;i++){
   	for(j=0;j<col;j++){
   		printf("%d ",b[i][j]);
	   }
	   printf("\n");
   }
   printf("\n Array ans=\n");
   
   for(i=0;i<row;i++){
   	for(j=0;j<col;j++){
   		printf("%d ",ans[i][j]);
	   }
	   printf("\n");
   }
   printf("\n do you want to continue? press y/n...:");
   scanf(" %c",&ch);
   if(ch=='y'||ch=='Y'){
   	goto up;
   }
   
   return 0;
}
