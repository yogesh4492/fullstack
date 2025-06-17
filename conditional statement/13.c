#include<stdio.h>
int main(){
	char ch;
	printf("\n enter the character=");
	scanf(" %c",&ch);
	if((ch>='A'&& ch<='Z') || (ch>='a' && ch<='z')){
		printf("\n %c is an  alphabet",ch);
	}
	else if(ch>='0'&&ch<='9'){
		printf("\n %c is a number",ch);
	}
	else{
		printf("\n%c is special symbol",ch);
	}
	return 0;
}
