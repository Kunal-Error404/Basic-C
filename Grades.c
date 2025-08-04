#include <stdio.h>
int main(){
    float marks;
    printf("Enter Marks obtained:");
    scanf("%f", &marks);
    if (marks>=0 && marks<30){
        printf("C");
    }
    else if (marks>=30 && marks<70){
        printf("B");
    }
    else if (marks>=70 && marks<90){
        printf("A");
    }
    else if (marks>=90 && marks<=100){
        printf("O");
    }
    else{
        printf("INVALID MARKS SO NO GRADE FO YOU!!!!");
    }
    return 0;
}