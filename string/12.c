#include<stdio.h>
void reverse(char str[]){
	int i,len=0;
	for(i=0;str[i]!='\0';i++){
		len++;
	}
	printf("\n reversed string=");
	for(i=len-1;i>=0;i--){
		printf("%c",str[i]);
	}
}
int main(){
	char str[100];
	printf("\n enter the string =");
	gets(str);
	printf("\n original string=%s",str);
	reverse(str);
	return 0;
}
