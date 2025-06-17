#include<stdio.h>
int main(){
	int num;
	printf("\n enter value in number=");
	scanf("%d",&num);
	
	switch(num){
		case 1: 
		      printf("\n today is monday");
		      break;
		case 2:
			printf("\ntoday is  tuesday");
			break;
	    case 3:
	    	printf("\ntoday is wednesday");
	    	break;
	    case 4:
	    	printf("\ntoday is thursday");
	    	break;
	    case 5:
	    	printf("\ntoday is friday");
	    	break;
	    case 6:
	    	printf("\ntoday is saturday ");
	    	break;
	    case 7:
	    	printf("\ntoday is sunday");
	    	break;
	    
	    default:
	    	printf("\n invalid day number");
	    
	    	
	}
	
	
	return 0;
}
