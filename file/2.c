#include<stdio.h>
int main(){
	FILE *fl;
	fl=fopen("second.txt","a");
	fprintf(fl,"\nhello this is my third program");
	fclose(fl);
	return 0;
}
