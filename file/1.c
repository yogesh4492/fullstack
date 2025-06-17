#include<stdio.h>
int main(){
	FILE *fl;
	fl=fopen("first.txt","w");
	fprintf(fl,"hello this is my first file program");
	fclose(fl);
	return 0;
}
