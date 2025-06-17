#include<stdio.h>
int main(){
	char str[100];
	printf("\n enter any string=");
	fgets(str,sizeof(str),stdin);
	//scanf("%s",&str);
	//gets(str);
	printf("\n String is =%s",str);
	return 0;
}
