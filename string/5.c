#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100];
	printf("\n enter the string in str1=");
	gets(str1);
	printf("\n enter the string in str2=");
	gets(str2);
	
	printf("\n Original string =%s",str1);
	printf("\n Original string =%s",str2);
	
	int length=strlen(str1);
	printf("\n length of str1=%d",length);
	printf("\n length of str2=%d",strlen(str2));
	
	return 0;
	
}

