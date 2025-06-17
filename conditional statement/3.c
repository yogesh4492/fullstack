#include<stdio.h>
int main(){
	int num;
	up :
	printf("\n enter the number=");
	scanf("%d",&num);
	printf("\n number you enter=%d",num);
	switch(num)
	{
		case -1:
		goto down;
	}
	goto up;
	down:
	return 0;
}
