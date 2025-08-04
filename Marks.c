#include <stdio.h>
int main(){
    float marks;
    printf("Enter marks obtained:");
    scanf("%f", &marks);
    if(marks>30 && marks<=100){
        printf("PASS");    
    }
    else if (marks>=0 && marks<=30){
        printf("FAIL");
    }
    else {
        printf("INVALID MARKS");
    }
    

}