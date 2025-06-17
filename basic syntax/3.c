// Your First C++ Program

#include <stdio.h>

int main() {
    int  roll ,std;
    float per;
    char grade;
    long int fees;

    printf("enter your roll no.=");
    scanf("%d",&roll);
    printf("\nenter your std.=");
    scanf("%d",&std);
    printf("\nenter your percentage.=");
    scanf("%f",&per);
    printf("\nenter your grade.=");
    scanf(" %c",&grade);
    printf("\nenter your fees=");
    scanf("%ld",&fees);
 
    
   
    printf("\n roll no=%d",roll);
    printf("\n std=%d",std);
    printf("\n percentage=%.2f",per);
    printf("\n grade=%c",grade);
    printf("\n fees=%ld",fees);
    
    
    return 0;
}

