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
	
	int result=strcmp(str1,str2);
	if(result==0){
		printf("\n both value(string) are  same");
	}
	else{
		printf("\n Both value(string) are different");
	}
    return 0;
}
