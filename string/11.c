#include<stdio.h>
int length(char str1[]){

    int i;
	for(i=0;str1[i]!='\0';i++){
	}
	return i;
}
int main(){
	char str1[100];
	printf("\n enter the str1=");
	gets(str1);
	
	printf("\n Orinial string =%s",str1);
	int result=length(str1);
	printf("\n length of string=%d",result);
	return 0;
}
