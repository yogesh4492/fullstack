#include<stdio.h>
int main(){
	char ch[100]="hello world";
	printf("\n str=%s\n",ch);
	int i;
	for(i=0;ch[i]!='\0';i++){
		printf("%c",ch[i]);
	}
	return 0;
}
