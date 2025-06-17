#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    printf("\n enter the string in str1=");
	gets(str1);
	printf("\n enter the string in str2=");
	gets(str2);
	
	printf("\n Original string =%s",str1);
	printf("\n Original string =%s\n",str2);
	
	strupr(str1);
	strlwr(str2);
	
	printf("\n string1 in upper case =%s",str1);
	printf("\n string2 in lower case =%s",str2);
    return 0;
}
