#include<stdio.h>
int main(){
	int a[9]={1,2,3,4,5,6,7,8,9};
	int *ptr=&a;
	printf("\n address of an array=%p",ptr);
	printf("\n address of a[0]=%p",&a[0]);
	printf("\n address of a[1]=%p",&a[1]);
	printf("\n address of a[2]=%p",&a[2]);
	printf("\n address of a[3]=%p",&a[3]);
	printf("\n address of a[4]=%p",&a[4]);
	printf("\n address of a[5]=%p",&a[5]);
	printf("\n address of a[6]=%p",&a[6]);
	printf("\n address of a[7]=%p",&a[7]);
	printf("\n address of a[8]=%p",&a[8]);
	
	return 0;
}
