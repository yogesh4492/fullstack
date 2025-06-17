#include<stdio.h>
int compare(char str1[],char str2[]){
	int i,len1=0,len2=0;
	for(i=0;str1[i]!='\0';i++){
		len1++;
	}
	for(i=0;str2[i]!='\0';i++){
		len2++;
	}
	if(len1==len2){
		int flag=0;
		for(i=0;str1[i]!='\0';i++){
			if(str1[i]!=str2[i]){
				flag=-1;
				break;
				
			}
		}
		return flag;
	}
	else{
		return -1;
	}
	
}
int main(){
   char str1[100],str2[100];
   printf("\n enter the string1=");
   gets(str1);
   printf("\n enter the string2=");
   gets(str2);
   int result=compare(str1,str2);
   if(result==0){
   	 printf("\n both value are same.");
   }
   else{
   	
   	 printf("\n both value are different.");
   }
   return 0;
   
}
