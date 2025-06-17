#include<stdio.h>
int main(){
	char str[100];
	FILE *fp;
	fp=fopen("demo.txt","r");
	if(fp==NULL){
	     printf("\n File does't exists");	
	}
	else{
	
    while(fgets(str,sizeof(str),fp)){
    	
	
	
    printf("%s",str);
}}
fclose(fp);

	
	return 0;
	
}
