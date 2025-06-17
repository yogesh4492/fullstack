#include<stdio.h>
void upper(char str1[]){
	int i;
	for(i=0;str1[i]!='\0';i++){
		if(str1[i]>=97 && str1[i]<=122){
			str1[i]=str1[i]-32;
		}
	}
	printf("\n string1  in upercase=%s",str1);
}
void lower(char str2[]){
	int i;
	for(i=0;str2[i]!='\0';i++){
		if(str2[i]>=65 && str2[i]<=90){
			str2[i]=str2[i]+32;
		}
	}
	printf("\n string2  in lowercase=%s",str2);
}
int main(){
	char str1[100],str2[100];
	printf("\n enter the string 1=");
	gets(str1);
	printf("\n enter the string 2=");
	gets(str2);
	printf("\n original value of str1=%s",str1);
	printf("\n original value of str2=%s",str2);
	upper(str1);
	lower(str2);
	return 0;
}
