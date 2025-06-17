#include<stdio.h>
union demo{
	int i ;
	char c;
};
struct temp{
	int n;
	char h;
};
int main(){
	union demo u;
	u.i=65;
	u.c='c';
	printf("\n value of i=%d",u.i);
	printf("\n value of c=%c",u.c);
	
	struct temp s;
	s.n=67;
	s.h='h';
	printf("\n value of n=%d",s.n);
	printf("\n value of h=%c",s.h);
	
	return 0;
}
