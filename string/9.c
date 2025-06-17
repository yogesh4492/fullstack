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
	
	strcpy(str1,str2);
	
	printf("\n copied string str1=%s",str1);
	printf("\n string 2=%s",str2);
	
    return 0;
}
